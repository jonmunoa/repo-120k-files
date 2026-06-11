<template>
  <section class="panel-36649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36649");
const base = ref(36649);
const total = computed(() => base.value * 2);

function incrementar36649() {
  base.value++;
}
</script>
