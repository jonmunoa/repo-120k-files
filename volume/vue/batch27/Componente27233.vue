<template>
  <section class="panel-27233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27233");
const base = ref(27233);
const total = computed(() => base.value * 2);

function incrementar27233() {
  base.value++;
}
</script>
