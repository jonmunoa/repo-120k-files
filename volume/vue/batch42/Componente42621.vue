<template>
  <section class="panel-42621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42621");
const base = ref(42621);
const total = computed(() => base.value * 2);

function incrementar42621() {
  base.value++;
}
</script>
