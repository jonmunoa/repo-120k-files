<template>
  <section class="panel-13521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13521");
const base = ref(13521);
const total = computed(() => base.value * 2);

function incrementar13521() {
  base.value++;
}
</script>
