<template>
  <section class="panel-34713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34713");
const base = ref(34713);
const total = computed(() => base.value * 2);

function incrementar34713() {
  base.value++;
}
</script>
