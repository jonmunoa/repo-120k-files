<template>
  <section class="panel-9361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9361");
const base = ref(9361);
const total = computed(() => base.value * 2);

function incrementar9361() {
  base.value++;
}
</script>
