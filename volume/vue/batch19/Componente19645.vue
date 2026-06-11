<template>
  <section class="panel-19645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19645");
const base = ref(19645);
const total = computed(() => base.value * 2);

function incrementar19645() {
  base.value++;
}
</script>
