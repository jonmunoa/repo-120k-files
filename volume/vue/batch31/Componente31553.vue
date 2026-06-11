<template>
  <section class="panel-31553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31553");
const base = ref(31553);
const total = computed(() => base.value * 2);

function incrementar31553() {
  base.value++;
}
</script>
