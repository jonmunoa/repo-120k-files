<template>
  <section class="panel-2509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2509");
const base = ref(2509);
const total = computed(() => base.value * 2);

function incrementar2509() {
  base.value++;
}
</script>
