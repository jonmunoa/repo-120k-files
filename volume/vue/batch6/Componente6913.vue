<template>
  <section class="panel-6913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6913");
const base = ref(6913);
const total = computed(() => base.value * 2);

function incrementar6913() {
  base.value++;
}
</script>
