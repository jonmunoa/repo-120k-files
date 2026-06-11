<template>
  <section class="panel-325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 325");
const base = ref(325);
const total = computed(() => base.value * 2);

function incrementar325() {
  base.value++;
}
</script>
