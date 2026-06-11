<template>
  <section class="panel-4197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4197");
const base = ref(4197);
const total = computed(() => base.value * 2);

function incrementar4197() {
  base.value++;
}
</script>
