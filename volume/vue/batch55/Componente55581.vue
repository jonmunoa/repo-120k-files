<template>
  <section class="panel-55581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55581");
const base = ref(55581);
const total = computed(() => base.value * 2);

function incrementar55581() {
  base.value++;
}
</script>
