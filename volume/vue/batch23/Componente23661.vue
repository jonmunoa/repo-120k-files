<template>
  <section class="panel-23661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23661");
const base = ref(23661);
const total = computed(() => base.value * 2);

function incrementar23661() {
  base.value++;
}
</script>
