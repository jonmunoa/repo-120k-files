<template>
  <section class="panel-37169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37169");
const base = ref(37169);
const total = computed(() => base.value * 2);

function incrementar37169() {
  base.value++;
}
</script>
