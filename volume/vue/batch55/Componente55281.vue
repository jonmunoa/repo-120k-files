<template>
  <section class="panel-55281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55281");
const base = ref(55281);
const total = computed(() => base.value * 2);

function incrementar55281() {
  base.value++;
}
</script>
