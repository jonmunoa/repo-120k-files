<template>
  <section class="panel-14157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14157");
const base = ref(14157);
const total = computed(() => base.value * 2);

function incrementar14157() {
  base.value++;
}
</script>
