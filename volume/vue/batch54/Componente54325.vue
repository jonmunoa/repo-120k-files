<template>
  <section class="panel-54325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54325");
const base = ref(54325);
const total = computed(() => base.value * 2);

function incrementar54325() {
  base.value++;
}
</script>
