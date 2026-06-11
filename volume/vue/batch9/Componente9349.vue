<template>
  <section class="panel-9349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9349");
const base = ref(9349);
const total = computed(() => base.value * 2);

function incrementar9349() {
  base.value++;
}
</script>
