<template>
  <section class="panel-14661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14661");
const base = ref(14661);
const total = computed(() => base.value * 2);

function incrementar14661() {
  base.value++;
}
</script>
