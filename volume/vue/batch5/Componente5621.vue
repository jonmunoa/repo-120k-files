<template>
  <section class="panel-5621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5621");
const base = ref(5621);
const total = computed(() => base.value * 2);

function incrementar5621() {
  base.value++;
}
</script>
