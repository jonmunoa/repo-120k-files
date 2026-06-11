<template>
  <section class="panel-38169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38169");
const base = ref(38169);
const total = computed(() => base.value * 2);

function incrementar38169() {
  base.value++;
}
</script>
