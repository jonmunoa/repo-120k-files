<template>
  <section class="panel-29913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29913");
const base = ref(29913);
const total = computed(() => base.value * 2);

function incrementar29913() {
  base.value++;
}
</script>
