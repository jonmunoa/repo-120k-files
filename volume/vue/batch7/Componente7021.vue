<template>
  <section class="panel-7021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7021");
const base = ref(7021);
const total = computed(() => base.value * 2);

function incrementar7021() {
  base.value++;
}
</script>
