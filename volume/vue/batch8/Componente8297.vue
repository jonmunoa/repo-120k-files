<template>
  <section class="panel-8297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8297");
const base = ref(8297);
const total = computed(() => base.value * 2);

function incrementar8297() {
  base.value++;
}
</script>
