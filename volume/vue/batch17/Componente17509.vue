<template>
  <section class="panel-17509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17509");
const base = ref(17509);
const total = computed(() => base.value * 2);

function incrementar17509() {
  base.value++;
}
</script>
