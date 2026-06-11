<template>
  <section class="panel-24545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24545");
const base = ref(24545);
const total = computed(() => base.value * 2);

function incrementar24545() {
  base.value++;
}
</script>
