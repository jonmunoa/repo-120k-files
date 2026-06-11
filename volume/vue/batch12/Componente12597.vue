<template>
  <section class="panel-12597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12597");
const base = ref(12597);
const total = computed(() => base.value * 2);

function incrementar12597() {
  base.value++;
}
</script>
