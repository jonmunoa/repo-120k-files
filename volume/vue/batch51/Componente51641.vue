<template>
  <section class="panel-51641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51641");
const base = ref(51641);
const total = computed(() => base.value * 2);

function incrementar51641() {
  base.value++;
}
</script>
