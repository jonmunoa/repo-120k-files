<template>
  <section class="panel-47465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47465");
const base = ref(47465);
const total = computed(() => base.value * 2);

function incrementar47465() {
  base.value++;
}
</script>
