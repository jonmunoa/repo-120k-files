<template>
  <section class="panel-18809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18809");
const base = ref(18809);
const total = computed(() => base.value * 2);

function incrementar18809() {
  base.value++;
}
</script>
