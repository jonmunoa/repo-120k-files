<template>
  <section class="panel-36621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36621");
const base = ref(36621);
const total = computed(() => base.value * 2);

function incrementar36621() {
  base.value++;
}
</script>
