<template>
  <section class="panel-31365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31365");
const base = ref(31365);
const total = computed(() => base.value * 2);

function incrementar31365() {
  base.value++;
}
</script>
