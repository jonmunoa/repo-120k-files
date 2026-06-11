<template>
  <section class="panel-39573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39573");
const base = ref(39573);
const total = computed(() => base.value * 2);

function incrementar39573() {
  base.value++;
}
</script>
