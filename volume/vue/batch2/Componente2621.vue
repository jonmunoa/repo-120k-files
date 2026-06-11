<template>
  <section class="panel-2621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2621");
const base = ref(2621);
const total = computed(() => base.value * 2);

function incrementar2621() {
  base.value++;
}
</script>
