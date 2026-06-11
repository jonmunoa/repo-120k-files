<template>
  <section class="panel-41365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41365");
const base = ref(41365);
const total = computed(() => base.value * 2);

function incrementar41365() {
  base.value++;
}
</script>
