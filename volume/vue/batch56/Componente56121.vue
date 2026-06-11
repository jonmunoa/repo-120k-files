<template>
  <section class="panel-56121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56121");
const base = ref(56121);
const total = computed(() => base.value * 2);

function incrementar56121() {
  base.value++;
}
</script>
