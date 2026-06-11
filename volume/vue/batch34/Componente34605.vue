<template>
  <section class="panel-34605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34605");
const base = ref(34605);
const total = computed(() => base.value * 2);

function incrementar34605() {
  base.value++;
}
</script>
