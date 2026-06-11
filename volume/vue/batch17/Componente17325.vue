<template>
  <section class="panel-17325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17325");
const base = ref(17325);
const total = computed(() => base.value * 2);

function incrementar17325() {
  base.value++;
}
</script>
