<template>
  <section class="panel-4721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4721");
const base = ref(4721);
const total = computed(() => base.value * 2);

function incrementar4721() {
  base.value++;
}
</script>
