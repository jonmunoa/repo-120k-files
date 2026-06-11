<template>
  <section class="panel-33621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33621");
const base = ref(33621);
const total = computed(() => base.value * 2);

function incrementar33621() {
  base.value++;
}
</script>
