<template>
  <section class="panel-16121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16121");
const base = ref(16121);
const total = computed(() => base.value * 2);

function incrementar16121() {
  base.value++;
}
</script>
