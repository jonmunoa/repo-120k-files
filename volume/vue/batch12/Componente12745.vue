<template>
  <section class="panel-12745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12745");
const base = ref(12745);
const total = computed(() => base.value * 2);

function incrementar12745() {
  base.value++;
}
</script>
