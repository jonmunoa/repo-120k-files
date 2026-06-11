<template>
  <section class="panel-15373">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15373");
const base = ref(15373);
const total = computed(() => base.value * 2);

function incrementar15373() {
  base.value++;
}
</script>
