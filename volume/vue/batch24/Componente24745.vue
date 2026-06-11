<template>
  <section class="panel-24745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24745");
const base = ref(24745);
const total = computed(() => base.value * 2);

function incrementar24745() {
  base.value++;
}
</script>
