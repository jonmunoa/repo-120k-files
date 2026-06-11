<template>
  <section class="panel-36253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36253");
const base = ref(36253);
const total = computed(() => base.value * 2);

function incrementar36253() {
  base.value++;
}
</script>
