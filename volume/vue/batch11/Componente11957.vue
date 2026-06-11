<template>
  <section class="panel-11957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11957");
const base = ref(11957);
const total = computed(() => base.value * 2);

function incrementar11957() {
  base.value++;
}
</script>
