<template>
  <section class="panel-55233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55233");
const base = ref(55233);
const total = computed(() => base.value * 2);

function incrementar55233() {
  base.value++;
}
</script>
