<template>
  <section class="panel-55333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55333");
const base = ref(55333);
const total = computed(() => base.value * 2);

function incrementar55333() {
  base.value++;
}
</script>
