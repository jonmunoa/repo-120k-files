<template>
  <section class="panel-19621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19621");
const base = ref(19621);
const total = computed(() => base.value * 2);

function incrementar19621() {
  base.value++;
}
</script>
