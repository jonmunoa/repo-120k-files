<template>
  <section class="panel-45669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45669");
const base = ref(45669);
const total = computed(() => base.value * 2);

function incrementar45669() {
  base.value++;
}
</script>
