<template>
  <section class="panel-20365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20365");
const base = ref(20365);
const total = computed(() => base.value * 2);

function incrementar20365() {
  base.value++;
}
</script>
