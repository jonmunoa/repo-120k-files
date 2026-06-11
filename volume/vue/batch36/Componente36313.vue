<template>
  <section class="panel-36313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36313");
const base = ref(36313);
const total = computed(() => base.value * 2);

function incrementar36313() {
  base.value++;
}
</script>
