<template>
  <section class="panel-56241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56241");
const base = ref(56241);
const total = computed(() => base.value * 2);

function incrementar56241() {
  base.value++;
}
</script>
