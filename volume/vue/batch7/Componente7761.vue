<template>
  <section class="panel-7761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7761");
const base = ref(7761);
const total = computed(() => base.value * 2);

function incrementar7761() {
  base.value++;
}
</script>
