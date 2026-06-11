<template>
  <section class="panel-2773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2773");
const base = ref(2773);
const total = computed(() => base.value * 2);

function incrementar2773() {
  base.value++;
}
</script>
