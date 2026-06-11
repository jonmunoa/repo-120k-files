<template>
  <section class="panel-12241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12241");
const base = ref(12241);
const total = computed(() => base.value * 2);

function incrementar12241() {
  base.value++;
}
</script>
