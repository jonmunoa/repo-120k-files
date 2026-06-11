<template>
  <section class="panel-5437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5437");
const base = ref(5437);
const total = computed(() => base.value * 2);

function incrementar5437() {
  base.value++;
}
</script>
