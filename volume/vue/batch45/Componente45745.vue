<template>
  <section class="panel-45745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45745");
const base = ref(45745);
const total = computed(() => base.value * 2);

function incrementar45745() {
  base.value++;
}
</script>
