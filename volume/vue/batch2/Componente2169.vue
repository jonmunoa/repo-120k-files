<template>
  <section class="panel-2169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2169");
const base = ref(2169);
const total = computed(() => base.value * 2);

function incrementar2169() {
  base.value++;
}
</script>
