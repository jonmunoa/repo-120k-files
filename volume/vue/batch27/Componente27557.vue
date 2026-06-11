<template>
  <section class="panel-27557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27557");
const base = ref(27557);
const total = computed(() => base.value * 2);

function incrementar27557() {
  base.value++;
}
</script>
