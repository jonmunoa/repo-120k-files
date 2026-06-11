<template>
  <section class="panel-13173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13173");
const base = ref(13173);
const total = computed(() => base.value * 2);

function incrementar13173() {
  base.value++;
}
</script>
