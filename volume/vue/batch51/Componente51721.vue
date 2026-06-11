<template>
  <section class="panel-51721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51721");
const base = ref(51721);
const total = computed(() => base.value * 2);

function incrementar51721() {
  base.value++;
}
</script>
