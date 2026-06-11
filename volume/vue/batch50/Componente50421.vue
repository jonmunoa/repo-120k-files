<template>
  <section class="panel-50421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50421");
const base = ref(50421);
const total = computed(() => base.value * 2);

function incrementar50421() {
  base.value++;
}
</script>
