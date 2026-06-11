<template>
  <section class="panel-55133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55133");
const base = ref(55133);
const total = computed(() => base.value * 2);

function incrementar55133() {
  base.value++;
}
</script>
