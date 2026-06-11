<template>
  <section class="panel-19089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19089");
const base = ref(19089);
const total = computed(() => base.value * 2);

function incrementar19089() {
  base.value++;
}
</script>
