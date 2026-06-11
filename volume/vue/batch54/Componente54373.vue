<template>
  <section class="panel-54373">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54373");
const base = ref(54373);
const total = computed(() => base.value * 2);

function incrementar54373() {
  base.value++;
}
</script>
