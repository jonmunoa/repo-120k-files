<template>
  <section class="panel-47565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47565");
const base = ref(47565);
const total = computed(() => base.value * 2);

function incrementar47565() {
  base.value++;
}
</script>
