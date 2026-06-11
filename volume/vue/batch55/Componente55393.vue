<template>
  <section class="panel-55393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55393");
const base = ref(55393);
const total = computed(() => base.value * 2);

function incrementar55393() {
  base.value++;
}
</script>
