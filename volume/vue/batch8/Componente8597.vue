<template>
  <section class="panel-8597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8597");
const base = ref(8597);
const total = computed(() => base.value * 2);

function incrementar8597() {
  base.value++;
}
</script>
