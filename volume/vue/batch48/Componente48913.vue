<template>
  <section class="panel-48913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48913");
const base = ref(48913);
const total = computed(() => base.value * 2);

function incrementar48913() {
  base.value++;
}
</script>
