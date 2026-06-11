<template>
  <section class="panel-41641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41641");
const base = ref(41641);
const total = computed(() => base.value * 2);

function incrementar41641() {
  base.value++;
}
</script>
