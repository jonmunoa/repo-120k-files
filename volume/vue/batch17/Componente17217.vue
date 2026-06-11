<template>
  <section class="panel-17217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17217");
const base = ref(17217);
const total = computed(() => base.value * 2);

function incrementar17217() {
  base.value++;
}
</script>
