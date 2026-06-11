<template>
  <section class="panel-21981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21981");
const base = ref(21981);
const total = computed(() => base.value * 2);

function incrementar21981() {
  base.value++;
}
</script>
