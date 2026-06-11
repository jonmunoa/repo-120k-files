<template>
  <section class="panel-22745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22745");
const base = ref(22745);
const total = computed(() => base.value * 2);

function incrementar22745() {
  base.value++;
}
</script>
