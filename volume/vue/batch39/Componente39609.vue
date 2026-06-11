<template>
  <section class="panel-39609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39609");
const base = ref(39609);
const total = computed(() => base.value * 2);

function incrementar39609() {
  base.value++;
}
</script>
