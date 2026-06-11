<template>
  <section class="panel-54441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54441");
const base = ref(54441);
const total = computed(() => base.value * 2);

function incrementar54441() {
  base.value++;
}
</script>
