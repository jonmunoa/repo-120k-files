<template>
  <section class="panel-34793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34793");
const base = ref(34793);
const total = computed(() => base.value * 2);

function incrementar34793() {
  base.value++;
}
</script>
