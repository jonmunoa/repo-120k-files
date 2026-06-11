<template>
  <section class="panel-9505">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9505");
const base = ref(9505);
const total = computed(() => base.value * 2);

function incrementar9505() {
  base.value++;
}
</script>
