<template>
  <section class="panel-4745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4745");
const base = ref(4745);
const total = computed(() => base.value * 2);

function incrementar4745() {
  base.value++;
}
</script>
