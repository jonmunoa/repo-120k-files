<template>
  <section class="panel-10721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10721");
const base = ref(10721);
const total = computed(() => base.value * 2);

function incrementar10721() {
  base.value++;
}
</script>
