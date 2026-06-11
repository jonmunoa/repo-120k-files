<template>
  <section class="panel-31589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31589");
const base = ref(31589);
const total = computed(() => base.value * 2);

function incrementar31589() {
  base.value++;
}
</script>
