<template>
  <section class="panel-47933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47933");
const base = ref(47933);
const total = computed(() => base.value * 2);

function incrementar47933() {
  base.value++;
}
</script>
