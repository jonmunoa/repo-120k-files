<template>
  <section class="panel-51677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51677");
const base = ref(51677);
const total = computed(() => base.value * 2);

function incrementar51677() {
  base.value++;
}
</script>
