<template>
  <section class="panel-18721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18721");
const base = ref(18721);
const total = computed(() => base.value * 2);

function incrementar18721() {
  base.value++;
}
</script>
