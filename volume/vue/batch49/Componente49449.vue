<template>
  <section class="panel-49449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49449");
const base = ref(49449);
const total = computed(() => base.value * 2);

function incrementar49449() {
  base.value++;
}
</script>
