<template>
  <section class="panel-52289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52289");
const base = ref(52289);
const total = computed(() => base.value * 2);

function incrementar52289() {
  base.value++;
}
</script>
