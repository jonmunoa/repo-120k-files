<template>
  <section class="panel-4117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4117");
const base = ref(4117);
const total = computed(() => base.value * 2);

function incrementar4117() {
  base.value++;
}
</script>
