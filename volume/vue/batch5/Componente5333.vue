<template>
  <section class="panel-5333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5333");
const base = ref(5333);
const total = computed(() => base.value * 2);

function incrementar5333() {
  base.value++;
}
</script>
