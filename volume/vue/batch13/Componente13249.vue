<template>
  <section class="panel-13249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13249");
const base = ref(13249);
const total = computed(() => base.value * 2);

function incrementar13249() {
  base.value++;
}
</script>
