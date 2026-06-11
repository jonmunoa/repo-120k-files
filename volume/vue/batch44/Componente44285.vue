<template>
  <section class="panel-44285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44285");
const base = ref(44285);
const total = computed(() => base.value * 2);

function incrementar44285() {
  base.value++;
}
</script>
