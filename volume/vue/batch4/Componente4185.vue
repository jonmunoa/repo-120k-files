<template>
  <section class="panel-4185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4185");
const base = ref(4185);
const total = computed(() => base.value * 2);

function incrementar4185() {
  base.value++;
}
</script>
