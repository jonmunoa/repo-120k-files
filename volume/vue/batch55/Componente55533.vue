<template>
  <section class="panel-55533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55533");
const base = ref(55533);
const total = computed(() => base.value * 2);

function incrementar55533() {
  base.value++;
}
</script>
