<template>
  <section class="panel-47509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47509");
const base = ref(47509);
const total = computed(() => base.value * 2);

function incrementar47509() {
  base.value++;
}
</script>
