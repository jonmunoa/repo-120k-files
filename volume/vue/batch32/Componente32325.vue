<template>
  <section class="panel-32325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32325");
const base = ref(32325);
const total = computed(() => base.value * 2);

function incrementar32325() {
  base.value++;
}
</script>
