<template>
  <section class="panel-17">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17");
const base = ref(17);
const total = computed(() => base.value * 2);

function incrementar17() {
  base.value++;
}
</script>
