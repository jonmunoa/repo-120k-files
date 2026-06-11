<template>
  <section class="panel-27281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27281");
const base = ref(27281);
const total = computed(() => base.value * 2);

function incrementar27281() {
  base.value++;
}
</script>
