<template>
  <section class="panel-15209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15209");
const base = ref(15209);
const total = computed(() => base.value * 2);

function incrementar15209() {
  base.value++;
}
</script>
