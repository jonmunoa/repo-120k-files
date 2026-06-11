<template>
  <section class="panel-25305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25305");
const base = ref(25305);
const total = computed(() => base.value * 2);

function incrementar25305() {
  base.value++;
}
</script>
