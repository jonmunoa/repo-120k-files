<template>
  <section class="panel-50209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50209");
const base = ref(50209);
const total = computed(() => base.value * 2);

function incrementar50209() {
  base.value++;
}
</script>
