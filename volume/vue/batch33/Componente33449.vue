<template>
  <section class="panel-33449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33449");
const base = ref(33449);
const total = computed(() => base.value * 2);

function incrementar33449() {
  base.value++;
}
</script>
