<template>
  <section class="panel-48597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48597");
const base = ref(48597);
const total = computed(() => base.value * 2);

function incrementar48597() {
  base.value++;
}
</script>
