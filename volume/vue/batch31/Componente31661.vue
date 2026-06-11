<template>
  <section class="panel-31661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31661");
const base = ref(31661);
const total = computed(() => base.value * 2);

function incrementar31661() {
  base.value++;
}
</script>
