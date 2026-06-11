<template>
  <section class="panel-7865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7865");
const base = ref(7865);
const total = computed(() => base.value * 2);

function incrementar7865() {
  base.value++;
}
</script>
