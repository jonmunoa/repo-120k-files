<template>
  <section class="panel-24201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24201");
const base = ref(24201);
const total = computed(() => base.value * 2);

function incrementar24201() {
  base.value++;
}
</script>
