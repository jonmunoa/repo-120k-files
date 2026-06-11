<template>
  <section class="panel-38553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38553");
const base = ref(38553);
const total = computed(() => base.value * 2);

function incrementar38553() {
  base.value++;
}
</script>
