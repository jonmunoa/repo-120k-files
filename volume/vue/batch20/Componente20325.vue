<template>
  <section class="panel-20325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20325");
const base = ref(20325);
const total = computed(() => base.value * 2);

function incrementar20325() {
  base.value++;
}
</script>
