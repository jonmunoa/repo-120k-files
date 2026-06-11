<template>
  <section class="panel-21145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21145");
const base = ref(21145);
const total = computed(() => base.value * 2);

function incrementar21145() {
  base.value++;
}
</script>
