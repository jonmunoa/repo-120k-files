<template>
  <section class="panel-33745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33745");
const base = ref(33745);
const total = computed(() => base.value * 2);

function incrementar33745() {
  base.value++;
}
</script>
