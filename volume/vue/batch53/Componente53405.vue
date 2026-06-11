<template>
  <section class="panel-53405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53405");
const base = ref(53405);
const total = computed(() => base.value * 2);

function incrementar53405() {
  base.value++;
}
</script>
