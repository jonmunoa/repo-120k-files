<template>
  <section class="panel-37501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37501");
const base = ref(37501);
const total = computed(() => base.value * 2);

function incrementar37501() {
  base.value++;
}
</script>
