<template>
  <section class="panel-33933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33933");
const base = ref(33933);
const total = computed(() => base.value * 2);

function incrementar33933() {
  base.value++;
}
</script>
