<template>
  <section class="panel-53981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53981");
const base = ref(53981);
const total = computed(() => base.value * 2);

function incrementar53981() {
  base.value++;
}
</script>
