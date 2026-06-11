<template>
  <section class="panel-41249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41249");
const base = ref(41249);
const total = computed(() => base.value * 2);

function incrementar41249() {
  base.value++;
}
</script>
