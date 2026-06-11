<template>
  <section class="panel-6185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6185");
const base = ref(6185);
const total = computed(() => base.value * 2);

function incrementar6185() {
  base.value++;
}
</script>
