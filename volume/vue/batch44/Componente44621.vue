<template>
  <section class="panel-44621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44621");
const base = ref(44621);
const total = computed(() => base.value * 2);

function incrementar44621() {
  base.value++;
}
</script>
