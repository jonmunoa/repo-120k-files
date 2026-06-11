<template>
  <section class="panel-21173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21173");
const base = ref(21173);
const total = computed(() => base.value * 2);

function incrementar21173() {
  base.value++;
}
</script>
