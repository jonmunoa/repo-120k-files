<template>
  <section class="panel-7209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7209");
const base = ref(7209);
const total = computed(() => base.value * 2);

function incrementar7209() {
  base.value++;
}
</script>
