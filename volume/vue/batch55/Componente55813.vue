<template>
  <section class="panel-55813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55813");
const base = ref(55813);
const total = computed(() => base.value * 2);

function incrementar55813() {
  base.value++;
}
</script>
