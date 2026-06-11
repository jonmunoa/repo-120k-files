<template>
  <section class="panel-937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 937");
const base = ref(937);
const total = computed(() => base.value * 2);

function incrementar937() {
  base.value++;
}
</script>
