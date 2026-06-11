<template>
  <section class="panel-17521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17521");
const base = ref(17521);
const total = computed(() => base.value * 2);

function incrementar17521() {
  base.value++;
}
</script>
