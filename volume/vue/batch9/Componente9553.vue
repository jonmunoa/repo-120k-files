<template>
  <section class="panel-9553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9553");
const base = ref(9553);
const total = computed(() => base.value * 2);

function incrementar9553() {
  base.value++;
}
</script>
