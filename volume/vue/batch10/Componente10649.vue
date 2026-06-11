<template>
  <section class="panel-10649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10649");
const base = ref(10649);
const total = computed(() => base.value * 2);

function incrementar10649() {
  base.value++;
}
</script>
