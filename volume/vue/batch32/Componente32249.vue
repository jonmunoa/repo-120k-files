<template>
  <section class="panel-32249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32249");
const base = ref(32249);
const total = computed(() => base.value * 2);

function incrementar32249() {
  base.value++;
}
</script>
