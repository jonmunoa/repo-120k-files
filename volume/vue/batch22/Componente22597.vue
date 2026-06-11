<template>
  <section class="panel-22597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22597");
const base = ref(22597);
const total = computed(() => base.value * 2);

function incrementar22597() {
  base.value++;
}
</script>
