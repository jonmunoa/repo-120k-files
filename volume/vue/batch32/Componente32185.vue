<template>
  <section class="panel-32185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32185");
const base = ref(32185);
const total = computed(() => base.value * 2);

function incrementar32185() {
  base.value++;
}
</script>
