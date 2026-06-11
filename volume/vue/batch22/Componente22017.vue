<template>
  <section class="panel-22017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22017");
const base = ref(22017);
const total = computed(() => base.value * 2);

function incrementar22017() {
  base.value++;
}
</script>
