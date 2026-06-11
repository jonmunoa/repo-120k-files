<template>
  <section class="panel-14533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14533");
const base = ref(14533);
const total = computed(() => base.value * 2);

function incrementar14533() {
  base.value++;
}
</script>
