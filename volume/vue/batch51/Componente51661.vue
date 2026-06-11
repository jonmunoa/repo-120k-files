<template>
  <section class="panel-51661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51661");
const base = ref(51661);
const total = computed(() => base.value * 2);

function incrementar51661() {
  base.value++;
}
</script>
