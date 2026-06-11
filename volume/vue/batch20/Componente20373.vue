<template>
  <section class="panel-20373">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20373");
const base = ref(20373);
const total = computed(() => base.value * 2);

function incrementar20373() {
  base.value++;
}
</script>
