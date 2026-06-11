<template>
  <section class="panel-7565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7565");
const base = ref(7565);
const total = computed(() => base.value * 2);

function incrementar7565() {
  base.value++;
}
</script>
