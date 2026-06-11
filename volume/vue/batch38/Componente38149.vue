<template>
  <section class="panel-38149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38149");
const base = ref(38149);
const total = computed(() => base.value * 2);

function incrementar38149() {
  base.value++;
}
</script>
