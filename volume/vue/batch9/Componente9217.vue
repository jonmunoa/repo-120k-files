<template>
  <section class="panel-9217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9217");
const base = ref(9217);
const total = computed(() => base.value * 2);

function incrementar9217() {
  base.value++;
}
</script>
