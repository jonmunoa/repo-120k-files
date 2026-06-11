<template>
  <section class="panel-5337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5337");
const base = ref(5337);
const total = computed(() => base.value * 2);

function incrementar5337() {
  base.value++;
}
</script>
