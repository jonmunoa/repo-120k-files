<template>
  <section class="panel-40233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40233");
const base = ref(40233);
const total = computed(() => base.value * 2);

function incrementar40233() {
  base.value++;
}
</script>
