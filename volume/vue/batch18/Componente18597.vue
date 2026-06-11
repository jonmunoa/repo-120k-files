<template>
  <section class="panel-18597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18597");
const base = ref(18597);
const total = computed(() => base.value * 2);

function incrementar18597() {
  base.value++;
}
</script>
