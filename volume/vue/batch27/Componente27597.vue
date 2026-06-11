<template>
  <section class="panel-27597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27597");
const base = ref(27597);
const total = computed(() => base.value * 2);

function incrementar27597() {
  base.value++;
}
</script>
