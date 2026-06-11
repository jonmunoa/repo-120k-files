<template>
  <section class="panel-17449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17449");
const base = ref(17449);
const total = computed(() => base.value * 2);

function incrementar17449() {
  base.value++;
}
</script>
