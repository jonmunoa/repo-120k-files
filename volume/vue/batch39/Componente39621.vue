<template>
  <section class="panel-39621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39621");
const base = ref(39621);
const total = computed(() => base.value * 2);

function incrementar39621() {
  base.value++;
}
</script>
