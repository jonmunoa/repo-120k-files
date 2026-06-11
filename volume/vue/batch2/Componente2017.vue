<template>
  <section class="panel-2017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2017");
const base = ref(2017);
const total = computed(() => base.value * 2);

function incrementar2017() {
  base.value++;
}
</script>
