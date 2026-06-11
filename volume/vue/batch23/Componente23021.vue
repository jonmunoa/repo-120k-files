<template>
  <section class="panel-23021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23021");
const base = ref(23021);
const total = computed(() => base.value * 2);

function incrementar23021() {
  base.value++;
}
</script>
