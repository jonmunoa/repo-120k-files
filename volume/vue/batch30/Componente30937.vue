<template>
  <section class="panel-30937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30937");
const base = ref(30937);
const total = computed(() => base.value * 2);

function incrementar30937() {
  base.value++;
}
</script>
