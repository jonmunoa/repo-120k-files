<template>
  <section class="panel-4229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4229");
const base = ref(4229);
const total = computed(() => base.value * 2);

function incrementar4229() {
  base.value++;
}
</script>
