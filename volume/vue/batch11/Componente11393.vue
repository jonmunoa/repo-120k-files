<template>
  <section class="panel-11393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11393");
const base = ref(11393);
const total = computed(() => base.value * 2);

function incrementar11393() {
  base.value++;
}
</script>
