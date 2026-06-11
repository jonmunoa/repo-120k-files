<template>
  <section class="panel-4621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4621");
const base = ref(4621);
const total = computed(() => base.value * 2);

function incrementar4621() {
  base.value++;
}
</script>
