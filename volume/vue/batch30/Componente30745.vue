<template>
  <section class="panel-30745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30745");
const base = ref(30745);
const total = computed(() => base.value * 2);

function incrementar30745() {
  base.value++;
}
</script>
