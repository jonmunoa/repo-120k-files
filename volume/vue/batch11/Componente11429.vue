<template>
  <section class="panel-11429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11429");
const base = ref(11429);
const total = computed(() => base.value * 2);

function incrementar11429() {
  base.value++;
}
</script>
