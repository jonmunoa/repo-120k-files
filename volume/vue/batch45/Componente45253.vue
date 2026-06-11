<template>
  <section class="panel-45253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45253");
const base = ref(45253);
const total = computed(() => base.value * 2);

function incrementar45253() {
  base.value++;
}
</script>
