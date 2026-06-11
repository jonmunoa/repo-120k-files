<template>
  <section class="panel-14449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14449");
const base = ref(14449);
const total = computed(() => base.value * 2);

function incrementar14449() {
  base.value++;
}
</script>
