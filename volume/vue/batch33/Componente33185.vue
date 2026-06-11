<template>
  <section class="panel-33185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33185");
const base = ref(33185);
const total = computed(() => base.value * 2);

function incrementar33185() {
  base.value++;
}
</script>
