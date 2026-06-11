<template>
  <section class="panel-23449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23449");
const base = ref(23449);
const total = computed(() => base.value * 2);

function incrementar23449() {
  base.value++;
}
</script>
