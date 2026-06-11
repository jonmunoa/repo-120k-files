<template>
  <section class="panel-35249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35249");
const base = ref(35249);
const total = computed(() => base.value * 2);

function incrementar35249() {
  base.value++;
}
</script>
