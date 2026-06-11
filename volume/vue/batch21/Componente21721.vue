<template>
  <section class="panel-21721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21721");
const base = ref(21721);
const total = computed(() => base.value * 2);

function incrementar21721() {
  base.value++;
}
</script>
