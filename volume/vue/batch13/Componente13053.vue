<template>
  <section class="panel-13053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13053");
const base = ref(13053);
const total = computed(() => base.value * 2);

function incrementar13053() {
  base.value++;
}
</script>
