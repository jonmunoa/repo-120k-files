<template>
  <section class="panel-605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 605");
const base = ref(605);
const total = computed(() => base.value * 2);

function incrementar605() {
  base.value++;
}
</script>
