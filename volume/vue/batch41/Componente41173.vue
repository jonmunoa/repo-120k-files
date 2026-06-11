<template>
  <section class="panel-41173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41173");
const base = ref(41173);
const total = computed(() => base.value * 2);

function incrementar41173() {
  base.value++;
}
</script>
