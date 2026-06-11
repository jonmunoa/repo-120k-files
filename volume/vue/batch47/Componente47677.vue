<template>
  <section class="panel-47677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47677");
const base = ref(47677);
const total = computed(() => base.value * 2);

function incrementar47677() {
  base.value++;
}
</script>
