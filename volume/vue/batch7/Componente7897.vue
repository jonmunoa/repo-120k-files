<template>
  <section class="panel-7897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7897");
const base = ref(7897);
const total = computed(() => base.value * 2);

function incrementar7897() {
  base.value++;
}
</script>
