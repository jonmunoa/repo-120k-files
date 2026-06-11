<template>
  <section class="panel-53677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53677");
const base = ref(53677);
const total = computed(() => base.value * 2);

function incrementar53677() {
  base.value++;
}
</script>
