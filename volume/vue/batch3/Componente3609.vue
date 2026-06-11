<template>
  <section class="panel-3609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3609");
const base = ref(3609);
const total = computed(() => base.value * 2);

function incrementar3609() {
  base.value++;
}
</script>
