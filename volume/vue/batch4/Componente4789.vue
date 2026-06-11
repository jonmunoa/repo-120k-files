<template>
  <section class="panel-4789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4789");
const base = ref(4789);
const total = computed(() => base.value * 2);

function incrementar4789() {
  base.value++;
}
</script>
