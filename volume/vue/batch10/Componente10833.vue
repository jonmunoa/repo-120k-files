<template>
  <section class="panel-10833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10833");
const base = ref(10833);
const total = computed(() => base.value * 2);

function incrementar10833() {
  base.value++;
}
</script>
