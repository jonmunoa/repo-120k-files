<template>
  <section class="panel-41789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41789");
const base = ref(41789);
const total = computed(() => base.value * 2);

function incrementar41789() {
  base.value++;
}
</script>
