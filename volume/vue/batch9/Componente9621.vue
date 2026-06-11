<template>
  <section class="panel-9621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9621");
const base = ref(9621);
const total = computed(() => base.value * 2);

function incrementar9621() {
  base.value++;
}
</script>
