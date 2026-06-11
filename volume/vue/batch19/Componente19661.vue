<template>
  <section class="panel-19661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19661");
const base = ref(19661);
const total = computed(() => base.value * 2);

function incrementar19661() {
  base.value++;
}
</script>
