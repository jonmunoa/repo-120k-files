<template>
  <section class="panel-27365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27365");
const base = ref(27365);
const total = computed(() => base.value * 2);

function incrementar27365() {
  base.value++;
}
</script>
