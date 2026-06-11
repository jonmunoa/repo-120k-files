<template>
  <section class="panel-29449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29449");
const base = ref(29449);
const total = computed(() => base.value * 2);

function incrementar29449() {
  base.value++;
}
</script>
