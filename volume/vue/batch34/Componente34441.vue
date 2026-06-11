<template>
  <section class="panel-34441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34441");
const base = ref(34441);
const total = computed(() => base.value * 2);

function incrementar34441() {
  base.value++;
}
</script>
