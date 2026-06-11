<template>
  <section class="panel-38485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38485");
const base = ref(38485);
const total = computed(() => base.value * 2);

function incrementar38485() {
  base.value++;
}
</script>
