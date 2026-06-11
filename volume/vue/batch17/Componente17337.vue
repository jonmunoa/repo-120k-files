<template>
  <section class="panel-17337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17337");
const base = ref(17337);
const total = computed(() => base.value * 2);

function incrementar17337() {
  base.value++;
}
</script>
