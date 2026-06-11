<template>
  <section class="panel-5221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5221");
const base = ref(5221);
const total = computed(() => base.value * 2);

function incrementar5221() {
  base.value++;
}
</script>
