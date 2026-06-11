<template>
  <section class="panel-41625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41625");
const base = ref(41625);
const total = computed(() => base.value * 2);

function incrementar41625() {
  base.value++;
}
</script>
