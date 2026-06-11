<template>
  <section class="panel-7597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7597");
const base = ref(7597);
const total = computed(() => base.value * 2);

function incrementar7597() {
  base.value++;
}
</script>
