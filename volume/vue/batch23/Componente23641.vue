<template>
  <section class="panel-23641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23641");
const base = ref(23641);
const total = computed(() => base.value * 2);

function incrementar23641() {
  base.value++;
}
</script>
