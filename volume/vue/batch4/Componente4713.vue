<template>
  <section class="panel-4713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4713");
const base = ref(4713);
const total = computed(() => base.value * 2);

function incrementar4713() {
  base.value++;
}
</script>
