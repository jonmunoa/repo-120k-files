<template>
  <section class="panel-50597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50597");
const base = ref(50597);
const total = computed(() => base.value * 2);

function incrementar50597() {
  base.value++;
}
</script>
