<template>
  <section class="panel-48185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48185");
const base = ref(48185);
const total = computed(() => base.value * 2);

function incrementar48185() {
  base.value++;
}
</script>
