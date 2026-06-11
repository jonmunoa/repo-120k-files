<template>
  <section class="panel-48061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48061");
const base = ref(48061);
const total = computed(() => base.value * 2);

function incrementar48061() {
  base.value++;
}
</script>
