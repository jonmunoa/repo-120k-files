<template>
  <section class="panel-27729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27729");
const base = ref(27729);
const total = computed(() => base.value * 2);

function incrementar27729() {
  base.value++;
}
</script>
