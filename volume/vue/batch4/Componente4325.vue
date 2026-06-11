<template>
  <section class="panel-4325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4325");
const base = ref(4325);
const total = computed(() => base.value * 2);

function incrementar4325() {
  base.value++;
}
</script>
