<template>
  <section class="panel-34429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34429");
const base = ref(34429);
const total = computed(() => base.value * 2);

function incrementar34429() {
  base.value++;
}
</script>
