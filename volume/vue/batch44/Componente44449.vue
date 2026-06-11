<template>
  <section class="panel-44449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44449");
const base = ref(44449);
const total = computed(() => base.value * 2);

function incrementar44449() {
  base.value++;
}
</script>
