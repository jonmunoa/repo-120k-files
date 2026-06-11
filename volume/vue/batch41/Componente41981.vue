<template>
  <section class="panel-41981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41981");
const base = ref(41981);
const total = computed(() => base.value * 2);

function incrementar41981() {
  base.value++;
}
</script>
