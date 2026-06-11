<template>
  <section class="panel-55589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55589");
const base = ref(55589);
const total = computed(() => base.value * 2);

function incrementar55589() {
  base.value++;
}
</script>
