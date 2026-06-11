<template>
  <section class="panel-9597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9597");
const base = ref(9597);
const total = computed(() => base.value * 2);

function incrementar9597() {
  base.value++;
}
</script>
