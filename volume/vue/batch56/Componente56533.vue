<template>
  <section class="panel-56533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56533");
const base = ref(56533);
const total = computed(() => base.value * 2);

function incrementar56533() {
  base.value++;
}
</script>
