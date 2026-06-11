<template>
  <section class="panel-52249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52249");
const base = ref(52249);
const total = computed(() => base.value * 2);

function incrementar52249() {
  base.value++;
}
</script>
