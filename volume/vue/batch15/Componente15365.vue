<template>
  <section class="panel-15365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15365");
const base = ref(15365);
const total = computed(() => base.value * 2);

function incrementar15365() {
  base.value++;
}
</script>
