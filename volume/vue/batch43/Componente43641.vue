<template>
  <section class="panel-43641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43641");
const base = ref(43641);
const total = computed(() => base.value * 2);

function incrementar43641() {
  base.value++;
}
</script>
