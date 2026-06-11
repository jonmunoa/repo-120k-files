<template>
  <section class="panel-1637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1637");
const base = ref(1637);
const total = computed(() => base.value * 2);

function incrementar1637() {
  base.value++;
}
</script>
