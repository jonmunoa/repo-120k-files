<template>
  <section class="panel-18117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18117");
const base = ref(18117);
const total = computed(() => base.value * 2);

function incrementar18117() {
  base.value++;
}
</script>
