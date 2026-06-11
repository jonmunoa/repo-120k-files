<template>
  <section class="panel-21673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21673");
const base = ref(21673);
const total = computed(() => base.value * 2);

function incrementar21673() {
  base.value++;
}
</script>
