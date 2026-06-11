<template>
  <section class="panel-47281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47281");
const base = ref(47281);
const total = computed(() => base.value * 2);

function incrementar47281() {
  base.value++;
}
</script>
