<template>
  <section class="panel-27137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27137");
const base = ref(27137);
const total = computed(() => base.value * 2);

function incrementar27137() {
  base.value++;
}
</script>
