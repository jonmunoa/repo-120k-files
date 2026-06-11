<template>
  <section class="panel-33865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33865");
const base = ref(33865);
const total = computed(() => base.value * 2);

function incrementar33865() {
  base.value++;
}
</script>
