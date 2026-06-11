<template>
  <section class="panel-32017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32017");
const base = ref(32017);
const total = computed(() => base.value * 2);

function incrementar32017() {
  base.value++;
}
</script>
