<template>
  <section class="panel-22673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22673");
const base = ref(22673);
const total = computed(() => base.value * 2);

function incrementar22673() {
  base.value++;
}
</script>
