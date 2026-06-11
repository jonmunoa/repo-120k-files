<template>
  <section class="panel-36813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36813");
const base = ref(36813);
const total = computed(() => base.value * 2);

function incrementar36813() {
  base.value++;
}
</script>
