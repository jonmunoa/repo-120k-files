<template>
  <section class="panel-40333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40333");
const base = ref(40333);
const total = computed(() => base.value * 2);

function incrementar40333() {
  base.value++;
}
</script>
