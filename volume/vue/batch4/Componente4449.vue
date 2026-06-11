<template>
  <section class="panel-4449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4449");
const base = ref(4449);
const total = computed(() => base.value * 2);

function incrementar4449() {
  base.value++;
}
</script>
