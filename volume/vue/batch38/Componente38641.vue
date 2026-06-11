<template>
  <section class="panel-38641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38641");
const base = ref(38641);
const total = computed(() => base.value * 2);

function incrementar38641() {
  base.value++;
}
</script>
