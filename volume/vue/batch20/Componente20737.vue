<template>
  <section class="panel-20737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20737");
const base = ref(20737);
const total = computed(() => base.value * 2);

function incrementar20737() {
  base.value++;
}
</script>
