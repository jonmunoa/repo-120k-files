<template>
  <section class="panel-36565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36565");
const base = ref(36565);
const total = computed(() => base.value * 2);

function incrementar36565() {
  base.value++;
}
</script>
