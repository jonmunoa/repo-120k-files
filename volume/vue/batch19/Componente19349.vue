<template>
  <section class="panel-19349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19349");
const base = ref(19349);
const total = computed(() => base.value * 2);

function incrementar19349() {
  base.value++;
}
</script>
