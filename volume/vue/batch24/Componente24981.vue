<template>
  <section class="panel-24981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24981");
const base = ref(24981);
const total = computed(() => base.value * 2);

function incrementar24981() {
  base.value++;
}
</script>
