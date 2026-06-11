<template>
  <section class="panel-31833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31833");
const base = ref(31833);
const total = computed(() => base.value * 2);

function incrementar31833() {
  base.value++;
}
</script>
