<template>
  <section class="panel-2977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2977");
const base = ref(2977);
const total = computed(() => base.value * 2);

function incrementar2977() {
  base.value++;
}
</script>
