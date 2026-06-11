<template>
  <section class="panel-5241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5241");
const base = ref(5241);
const total = computed(() => base.value * 2);

function incrementar5241() {
  base.value++;
}
</script>
