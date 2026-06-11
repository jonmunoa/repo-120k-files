<template>
  <section class="panel-20761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20761");
const base = ref(20761);
const total = computed(() => base.value * 2);

function incrementar20761() {
  base.value++;
}
</script>
