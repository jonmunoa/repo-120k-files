<template>
  <section class="panel-5101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5101");
const base = ref(5101);
const total = computed(() => base.value * 2);

function incrementar5101() {
  base.value++;
}
</script>
