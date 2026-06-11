<template>
  <section class="panel-36537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36537");
const base = ref(36537);
const total = computed(() => base.value * 2);

function incrementar36537() {
  base.value++;
}
</script>
