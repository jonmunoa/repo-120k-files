<template>
  <section class="panel-1349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1349");
const base = ref(1349);
const total = computed(() => base.value * 2);

function incrementar1349() {
  base.value++;
}
</script>
