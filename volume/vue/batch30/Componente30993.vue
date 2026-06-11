<template>
  <section class="panel-30993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30993");
const base = ref(30993);
const total = computed(() => base.value * 2);

function incrementar30993() {
  base.value++;
}
</script>
