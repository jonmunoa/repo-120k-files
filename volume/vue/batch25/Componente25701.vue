<template>
  <section class="panel-25701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25701");
const base = ref(25701);
const total = computed(() => base.value * 2);

function incrementar25701() {
  base.value++;
}
</script>
