<template>
  <section class="panel-23709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23709");
const base = ref(23709);
const total = computed(() => base.value * 2);

function incrementar23709() {
  base.value++;
}
</script>
