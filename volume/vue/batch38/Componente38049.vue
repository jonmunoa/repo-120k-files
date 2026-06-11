<template>
  <section class="panel-38049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38049");
const base = ref(38049);
const total = computed(() => base.value * 2);

function incrementar38049() {
  base.value++;
}
</script>
