<template>
  <section class="panel-22913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22913");
const base = ref(22913);
const total = computed(() => base.value * 2);

function incrementar22913() {
  base.value++;
}
</script>
