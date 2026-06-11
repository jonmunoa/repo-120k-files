<template>
  <section class="panel-44441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44441");
const base = ref(44441);
const total = computed(() => base.value * 2);

function incrementar44441() {
  base.value++;
}
</script>
