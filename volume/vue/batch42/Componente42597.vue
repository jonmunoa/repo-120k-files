<template>
  <section class="panel-42597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42597");
const base = ref(42597);
const total = computed(() => base.value * 2);

function incrementar42597() {
  base.value++;
}
</script>
