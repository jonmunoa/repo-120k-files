<template>
  <section class="panel-29865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29865");
const base = ref(29865);
const total = computed(() => base.value * 2);

function incrementar29865() {
  base.value++;
}
</script>
