<template>
  <section class="panel-12249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12249");
const base = ref(12249);
const total = computed(() => base.value * 2);

function incrementar12249() {
  base.value++;
}
</script>
