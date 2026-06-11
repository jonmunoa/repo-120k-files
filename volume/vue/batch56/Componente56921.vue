<template>
  <section class="panel-56921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56921");
const base = ref(56921);
const total = computed(() => base.value * 2);

function incrementar56921() {
  base.value++;
}
</script>
