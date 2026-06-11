<template>
  <section class="panel-27677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27677");
const base = ref(27677);
const total = computed(() => base.value * 2);

function incrementar27677() {
  base.value++;
}
</script>
