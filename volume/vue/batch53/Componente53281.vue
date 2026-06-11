<template>
  <section class="panel-53281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53281");
const base = ref(53281);
const total = computed(() => base.value * 2);

function incrementar53281() {
  base.value++;
}
</script>
