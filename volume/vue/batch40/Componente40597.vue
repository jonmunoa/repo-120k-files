<template>
  <section class="panel-40597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40597");
const base = ref(40597);
const total = computed(() => base.value * 2);

function incrementar40597() {
  base.value++;
}
</script>
