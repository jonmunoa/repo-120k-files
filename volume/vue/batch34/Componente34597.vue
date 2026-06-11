<template>
  <section class="panel-34597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34597");
const base = ref(34597);
const total = computed(() => base.value * 2);

function incrementar34597() {
  base.value++;
}
</script>
