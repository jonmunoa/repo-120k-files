<template>
  <section class="panel-22761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22761");
const base = ref(22761);
const total = computed(() => base.value * 2);

function incrementar22761() {
  base.value++;
}
</script>
