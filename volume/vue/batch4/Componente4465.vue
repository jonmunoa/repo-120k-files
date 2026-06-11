<template>
  <section class="panel-4465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4465");
const base = ref(4465);
const total = computed(() => base.value * 2);

function incrementar4465() {
  base.value++;
}
</script>
