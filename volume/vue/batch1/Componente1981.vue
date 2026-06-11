<template>
  <section class="panel-1981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1981");
const base = ref(1981);
const total = computed(() => base.value * 2);

function incrementar1981() {
  base.value++;
}
</script>
