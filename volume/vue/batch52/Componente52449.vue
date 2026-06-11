<template>
  <section class="panel-52449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52449");
const base = ref(52449);
const total = computed(() => base.value * 2);

function incrementar52449() {
  base.value++;
}
</script>
