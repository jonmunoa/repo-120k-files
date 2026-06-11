<template>
  <section class="panel-28597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28597");
const base = ref(28597);
const total = computed(() => base.value * 2);

function incrementar28597() {
  base.value++;
}
</script>
