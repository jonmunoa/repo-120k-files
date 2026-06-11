<template>
  <section class="panel-15449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15449");
const base = ref(15449);
const total = computed(() => base.value * 2);

function incrementar15449() {
  base.value++;
}
</script>
