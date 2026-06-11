<template>
  <section class="panel-33641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33641");
const base = ref(33641);
const total = computed(() => base.value * 2);

function incrementar33641() {
  base.value++;
}
</script>
