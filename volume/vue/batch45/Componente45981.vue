<template>
  <section class="panel-45981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45981");
const base = ref(45981);
const total = computed(() => base.value * 2);

function incrementar45981() {
  base.value++;
}
</script>
