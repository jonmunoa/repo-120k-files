<template>
  <section class="panel-27157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27157");
const base = ref(27157);
const total = computed(() => base.value * 2);

function incrementar27157() {
  base.value++;
}
</script>
