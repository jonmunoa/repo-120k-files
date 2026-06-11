<template>
  <section class="panel-8197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8197");
const base = ref(8197);
const total = computed(() => base.value * 2);

function incrementar8197() {
  base.value++;
}
</script>
