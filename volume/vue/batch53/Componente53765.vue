<template>
  <section class="panel-53765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53765");
const base = ref(53765);
const total = computed(() => base.value * 2);

function incrementar53765() {
  base.value++;
}
</script>
