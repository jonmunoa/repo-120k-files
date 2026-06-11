<template>
  <section class="panel-14017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14017");
const base = ref(14017);
const total = computed(() => base.value * 2);

function incrementar14017() {
  base.value++;
}
</script>
