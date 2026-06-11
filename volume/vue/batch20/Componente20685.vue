<template>
  <section class="panel-20685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20685");
const base = ref(20685);
const total = computed(() => base.value * 2);

function incrementar20685() {
  base.value++;
}
</script>
