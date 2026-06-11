<template>
  <section class="panel-22357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22357");
const base = ref(22357);
const total = computed(() => base.value * 2);

function incrementar22357() {
  base.value++;
}
</script>
