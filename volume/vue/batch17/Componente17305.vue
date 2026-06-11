<template>
  <section class="panel-17305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17305");
const base = ref(17305);
const total = computed(() => base.value * 2);

function incrementar17305() {
  base.value++;
}
</script>
