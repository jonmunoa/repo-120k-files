<template>
  <section class="panel-41745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41745");
const base = ref(41745);
const total = computed(() => base.value * 2);

function incrementar41745() {
  base.value++;
}
</script>
