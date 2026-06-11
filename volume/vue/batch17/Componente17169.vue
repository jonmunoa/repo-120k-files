<template>
  <section class="panel-17169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17169");
const base = ref(17169);
const total = computed(() => base.value * 2);

function incrementar17169() {
  base.value++;
}
</script>
