<template>
  <section class="panel-55153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55153");
const base = ref(55153);
const total = computed(() => base.value * 2);

function incrementar55153() {
  base.value++;
}
</script>
