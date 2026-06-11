<template>
  <section class="panel-55301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55301");
const base = ref(55301);
const total = computed(() => base.value * 2);

function incrementar55301() {
  base.value++;
}
</script>
