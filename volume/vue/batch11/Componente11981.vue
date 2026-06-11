<template>
  <section class="panel-11981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11981");
const base = ref(11981);
const total = computed(() => base.value * 2);

function incrementar11981() {
  base.value++;
}
</script>
