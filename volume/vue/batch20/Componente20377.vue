<template>
  <section class="panel-20377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20377");
const base = ref(20377);
const total = computed(() => base.value * 2);

function incrementar20377() {
  base.value++;
}
</script>
