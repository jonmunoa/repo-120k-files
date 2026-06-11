<template>
  <section class="panel-2865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2865");
const base = ref(2865);
const total = computed(() => base.value * 2);

function incrementar2865() {
  base.value++;
}
</script>
