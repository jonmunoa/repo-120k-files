<template>
  <section class="panel-21249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21249");
const base = ref(21249);
const total = computed(() => base.value * 2);

function incrementar21249() {
  base.value++;
}
</script>
