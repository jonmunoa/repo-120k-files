<template>
  <section class="panel-30589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30589");
const base = ref(30589);
const total = computed(() => base.value * 2);

function incrementar30589() {
  base.value++;
}
</script>
