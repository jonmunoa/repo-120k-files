<template>
  <section class="panel-55101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55101");
const base = ref(55101);
const total = computed(() => base.value * 2);

function incrementar55101() {
  base.value++;
}
</script>
