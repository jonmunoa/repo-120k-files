<template>
  <section class="panel-16357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16357");
const base = ref(16357);
const total = computed(() => base.value * 2);

function incrementar16357() {
  base.value++;
}
</script>
