<template>
  <section class="panel-47605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47605");
const base = ref(47605);
const total = computed(() => base.value * 2);

function incrementar47605() {
  base.value++;
}
</script>
