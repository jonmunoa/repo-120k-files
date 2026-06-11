<template>
  <section class="panel-20169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20169");
const base = ref(20169);
const total = computed(() => base.value * 2);

function incrementar20169() {
  base.value++;
}
</script>
