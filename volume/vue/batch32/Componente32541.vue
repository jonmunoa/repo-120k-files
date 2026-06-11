<template>
  <section class="panel-32541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32541");
const base = ref(32541);
const total = computed(() => base.value * 2);

function incrementar32541() {
  base.value++;
}
</script>
