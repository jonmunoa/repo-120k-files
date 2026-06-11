<template>
  <section class="panel-49529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49529");
const base = ref(49529);
const total = computed(() => base.value * 2);

function incrementar49529() {
  base.value++;
}
</script>
