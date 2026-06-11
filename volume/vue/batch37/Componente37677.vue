<template>
  <section class="panel-37677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37677");
const base = ref(37677);
const total = computed(() => base.value * 2);

function incrementar37677() {
  base.value++;
}
</script>
