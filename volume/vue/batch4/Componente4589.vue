<template>
  <section class="panel-4589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4589");
const base = ref(4589);
const total = computed(() => base.value * 2);

function incrementar4589() {
  base.value++;
}
</script>
