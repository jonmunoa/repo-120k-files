<template>
  <section class="panel-7673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7673");
const base = ref(7673);
const total = computed(() => base.value * 2);

function incrementar7673() {
  base.value++;
}
</script>
