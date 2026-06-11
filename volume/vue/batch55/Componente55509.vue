<template>
  <section class="panel-55509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55509");
const base = ref(55509);
const total = computed(() => base.value * 2);

function incrementar55509() {
  base.value++;
}
</script>
