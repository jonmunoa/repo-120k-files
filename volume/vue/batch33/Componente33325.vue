<template>
  <section class="panel-33325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33325");
const base = ref(33325);
const total = computed(() => base.value * 2);

function incrementar33325() {
  base.value++;
}
</script>
