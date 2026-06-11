<template>
  <section class="panel-47553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47553");
const base = ref(47553);
const total = computed(() => base.value * 2);

function incrementar47553() {
  base.value++;
}
</script>
