<template>
  <section class="panel-4365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4365");
const base = ref(4365);
const total = computed(() => base.value * 2);

function incrementar4365() {
  base.value++;
}
</script>
