<template>
  <section class="panel-11553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11553");
const base = ref(11553);
const total = computed(() => base.value * 2);

function incrementar11553() {
  base.value++;
}
</script>
