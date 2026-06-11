<template>
  <section class="panel-21621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21621");
const base = ref(21621);
const total = computed(() => base.value * 2);

function incrementar21621() {
  base.value++;
}
</script>
