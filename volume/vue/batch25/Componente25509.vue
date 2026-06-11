<template>
  <section class="panel-25509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25509");
const base = ref(25509);
const total = computed(() => base.value * 2);

function incrementar25509() {
  base.value++;
}
</script>
