<template>
  <section class="panel-55789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55789");
const base = ref(55789);
const total = computed(() => base.value * 2);

function incrementar55789() {
  base.value++;
}
</script>
