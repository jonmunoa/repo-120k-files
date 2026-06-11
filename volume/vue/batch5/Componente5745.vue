<template>
  <section class="panel-5745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5745");
const base = ref(5745);
const total = computed(() => base.value * 2);

function incrementar5745() {
  base.value++;
}
</script>
