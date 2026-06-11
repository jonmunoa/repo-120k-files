<template>
  <section class="panel-17809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17809");
const base = ref(17809);
const total = computed(() => base.value * 2);

function incrementar17809() {
  base.value++;
}
</script>
