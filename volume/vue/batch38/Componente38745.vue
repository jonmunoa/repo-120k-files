<template>
  <section class="panel-38745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38745");
const base = ref(38745);
const total = computed(() => base.value * 2);

function incrementar38745() {
  base.value++;
}
</script>
