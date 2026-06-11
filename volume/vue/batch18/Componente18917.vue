<template>
  <section class="panel-18917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18917");
const base = ref(18917);
const total = computed(() => base.value * 2);

function incrementar18917() {
  base.value++;
}
</script>
