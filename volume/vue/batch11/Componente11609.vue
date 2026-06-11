<template>
  <section class="panel-11609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11609");
const base = ref(11609);
const total = computed(() => base.value * 2);

function incrementar11609() {
  base.value++;
}
</script>
