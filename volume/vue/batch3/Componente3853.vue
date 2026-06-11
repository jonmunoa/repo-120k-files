<template>
  <section class="panel-3853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3853");
const base = ref(3853);
const total = computed(() => base.value * 2);

function incrementar3853() {
  base.value++;
}
</script>
