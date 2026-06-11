<template>
  <section class="panel-47533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47533");
const base = ref(47533);
const total = computed(() => base.value * 2);

function incrementar47533() {
  base.value++;
}
</script>
