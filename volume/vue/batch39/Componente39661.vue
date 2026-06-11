<template>
  <section class="panel-39661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39661");
const base = ref(39661);
const total = computed(() => base.value * 2);

function incrementar39661() {
  base.value++;
}
</script>
