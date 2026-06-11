<template>
  <section class="panel-41405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41405");
const base = ref(41405);
const total = computed(() => base.value * 2);

function incrementar41405() {
  base.value++;
}
</script>
