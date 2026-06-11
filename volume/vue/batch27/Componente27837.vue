<template>
  <section class="panel-27837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27837");
const base = ref(27837);
const total = computed(() => base.value * 2);

function incrementar27837() {
  base.value++;
}
</script>
