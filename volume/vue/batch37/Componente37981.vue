<template>
  <section class="panel-37981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37981");
const base = ref(37981);
const total = computed(() => base.value * 2);

function incrementar37981() {
  base.value++;
}
</script>
