<template>
  <section class="panel-22685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22685");
const base = ref(22685);
const total = computed(() => base.value * 2);

function incrementar22685() {
  base.value++;
}
</script>
