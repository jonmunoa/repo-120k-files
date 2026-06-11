<template>
  <section class="panel-17541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17541");
const base = ref(17541);
const total = computed(() => base.value * 2);

function incrementar17541() {
  base.value++;
}
</script>
