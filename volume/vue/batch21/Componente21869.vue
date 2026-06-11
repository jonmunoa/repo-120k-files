<template>
  <section class="panel-21869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21869");
const base = ref(21869);
const total = computed(() => base.value * 2);

function incrementar21869() {
  base.value++;
}
</script>
