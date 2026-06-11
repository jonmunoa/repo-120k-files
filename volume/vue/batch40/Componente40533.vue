<template>
  <section class="panel-40533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40533");
const base = ref(40533);
const total = computed(() => base.value * 2);

function incrementar40533() {
  base.value++;
}
</script>
