<template>
  <section class="panel-49605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49605");
const base = ref(49605);
const total = computed(() => base.value * 2);

function incrementar49605() {
  base.value++;
}
</script>
