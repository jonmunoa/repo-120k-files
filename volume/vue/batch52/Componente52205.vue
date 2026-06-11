<template>
  <section class="panel-52205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52205");
const base = ref(52205);
const total = computed(() => base.value * 2);

function incrementar52205() {
  base.value++;
}
</script>
