<template>
  <section class="panel-31621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31621");
const base = ref(31621);
const total = computed(() => base.value * 2);

function incrementar31621() {
  base.value++;
}
</script>
