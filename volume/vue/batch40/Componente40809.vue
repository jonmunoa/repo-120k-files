<template>
  <section class="panel-40809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40809");
const base = ref(40809);
const total = computed(() => base.value * 2);

function incrementar40809() {
  base.value++;
}
</script>
