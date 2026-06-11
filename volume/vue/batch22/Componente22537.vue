<template>
  <section class="panel-22537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22537");
const base = ref(22537);
const total = computed(() => base.value * 2);

function incrementar22537() {
  base.value++;
}
</script>
