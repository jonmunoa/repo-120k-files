<template>
  <section class="panel-55465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55465");
const base = ref(55465);
const total = computed(() => base.value * 2);

function incrementar55465() {
  base.value++;
}
</script>
