<template>
  <section class="panel-7449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7449");
const base = ref(7449);
const total = computed(() => base.value * 2);

function incrementar7449() {
  base.value++;
}
</script>
