<template>
  <section class="panel-28865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28865");
const base = ref(28865);
const total = computed(() => base.value * 2);

function incrementar28865() {
  base.value++;
}
</script>
