<template>
  <section class="panel-22981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22981");
const base = ref(22981);
const total = computed(() => base.value * 2);

function incrementar22981() {
  base.value++;
}
</script>
