<template>
  <section class="panel-8685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8685");
const base = ref(8685);
const total = computed(() => base.value * 2);

function incrementar8685() {
  base.value++;
}
</script>
