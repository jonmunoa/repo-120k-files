<template>
  <section class="panel-6993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6993");
const base = ref(6993);
const total = computed(() => base.value * 2);

function incrementar6993() {
  base.value++;
}
</script>
