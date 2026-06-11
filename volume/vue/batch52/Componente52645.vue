<template>
  <section class="panel-52645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52645");
const base = ref(52645);
const total = computed(() => base.value * 2);

function incrementar52645() {
  base.value++;
}
</script>
