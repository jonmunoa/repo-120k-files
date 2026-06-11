<template>
  <section class="panel-21449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21449");
const base = ref(21449);
const total = computed(() => base.value * 2);

function incrementar21449() {
  base.value++;
}
</script>
