<template>
  <section class="panel-11933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11933");
const base = ref(11933);
const total = computed(() => base.value * 2);

function incrementar11933() {
  base.value++;
}
</script>
