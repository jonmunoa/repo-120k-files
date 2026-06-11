<template>
  <section class="panel-53533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53533");
const base = ref(53533);
const total = computed(() => base.value * 2);

function incrementar53533() {
  base.value++;
}
</script>
