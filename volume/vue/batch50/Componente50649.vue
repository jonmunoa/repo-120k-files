<template>
  <section class="panel-50649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50649");
const base = ref(50649);
const total = computed(() => base.value * 2);

function incrementar50649() {
  base.value++;
}
</script>
