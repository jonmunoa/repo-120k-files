<template>
  <section class="panel-55561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55561");
const base = ref(55561);
const total = computed(() => base.value * 2);

function incrementar55561() {
  base.value++;
}
</script>
