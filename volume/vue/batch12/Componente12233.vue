<template>
  <section class="panel-12233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12233");
const base = ref(12233);
const total = computed(() => base.value * 2);

function incrementar12233() {
  base.value++;
}
</script>
