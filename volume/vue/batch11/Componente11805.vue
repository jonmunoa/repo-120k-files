<template>
  <section class="panel-11805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11805");
const base = ref(11805);
const total = computed(() => base.value * 2);

function incrementar11805() {
  base.value++;
}
</script>
