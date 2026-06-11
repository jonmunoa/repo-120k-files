<template>
  <section class="panel-10269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10269");
const base = ref(10269);
const total = computed(() => base.value * 2);

function incrementar10269() {
  base.value++;
}
</script>
