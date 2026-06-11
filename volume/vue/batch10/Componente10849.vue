<template>
  <section class="panel-10849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10849");
const base = ref(10849);
const total = computed(() => base.value * 2);

function incrementar10849() {
  base.value++;
}
</script>
