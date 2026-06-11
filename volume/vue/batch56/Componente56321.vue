<template>
  <section class="panel-56321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56321");
const base = ref(56321);
const total = computed(() => base.value * 2);

function incrementar56321() {
  base.value++;
}
</script>
