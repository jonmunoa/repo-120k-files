<template>
  <section class="panel-29897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29897");
const base = ref(29897);
const total = computed(() => base.value * 2);

function incrementar29897() {
  base.value++;
}
</script>
