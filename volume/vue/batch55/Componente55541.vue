<template>
  <section class="panel-55541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55541");
const base = ref(55541);
const total = computed(() => base.value * 2);

function incrementar55541() {
  base.value++;
}
</script>
