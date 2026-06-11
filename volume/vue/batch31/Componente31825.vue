<template>
  <section class="panel-31825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31825");
const base = ref(31825);
const total = computed(() => base.value * 2);

function incrementar31825() {
  base.value++;
}
</script>
