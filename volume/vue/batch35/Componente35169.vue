<template>
  <section class="panel-35169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35169");
const base = ref(35169);
const total = computed(() => base.value * 2);

function incrementar35169() {
  base.value++;
}
</script>
