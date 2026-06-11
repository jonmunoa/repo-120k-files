<template>
  <section class="panel-2937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2937");
const base = ref(2937);
const total = computed(() => base.value * 2);

function incrementar2937() {
  base.value++;
}
</script>
