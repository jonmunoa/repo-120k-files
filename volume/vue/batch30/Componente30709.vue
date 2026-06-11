<template>
  <section class="panel-30709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30709");
const base = ref(30709);
const total = computed(() => base.value * 2);

function incrementar30709() {
  base.value++;
}
</script>
