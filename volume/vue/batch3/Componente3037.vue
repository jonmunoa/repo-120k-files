<template>
  <section class="panel-3037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3037");
const base = ref(3037);
const total = computed(() => base.value * 2);

function incrementar3037() {
  base.value++;
}
</script>
