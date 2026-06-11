<template>
  <section class="panel-52609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52609");
const base = ref(52609);
const total = computed(() => base.value * 2);

function incrementar52609() {
  base.value++;
}
</script>
