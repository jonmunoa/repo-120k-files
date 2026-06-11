<template>
  <section class="panel-14281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14281");
const base = ref(14281);
const total = computed(() => base.value * 2);

function incrementar14281() {
  base.value++;
}
</script>
