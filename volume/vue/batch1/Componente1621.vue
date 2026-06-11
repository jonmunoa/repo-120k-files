<template>
  <section class="panel-1621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1621");
const base = ref(1621);
const total = computed(() => base.value * 2);

function incrementar1621() {
  base.value++;
}
</script>
