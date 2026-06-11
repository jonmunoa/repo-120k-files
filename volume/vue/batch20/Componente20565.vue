<template>
  <section class="panel-20565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20565");
const base = ref(20565);
const total = computed(() => base.value * 2);

function incrementar20565() {
  base.value++;
}
</script>
