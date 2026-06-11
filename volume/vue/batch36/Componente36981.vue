<template>
  <section class="panel-36981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36981");
const base = ref(36981);
const total = computed(() => base.value * 2);

function incrementar36981() {
  base.value++;
}
</script>
