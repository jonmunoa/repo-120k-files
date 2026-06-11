<template>
  <section class="panel-39913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39913");
const base = ref(39913);
const total = computed(() => base.value * 2);

function incrementar39913() {
  base.value++;
}
</script>
