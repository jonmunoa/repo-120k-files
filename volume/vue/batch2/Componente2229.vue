<template>
  <section class="panel-2229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2229");
const base = ref(2229);
const total = computed(() => base.value * 2);

function incrementar2229() {
  base.value++;
}
</script>
