<template>
  <section class="panel-54621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54621");
const base = ref(54621);
const total = computed(() => base.value * 2);

function incrementar54621() {
  base.value++;
}
</script>
