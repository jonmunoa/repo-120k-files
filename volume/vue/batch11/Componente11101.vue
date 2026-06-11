<template>
  <section class="panel-11101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11101");
const base = ref(11101);
const total = computed(() => base.value * 2);

function incrementar11101() {
  base.value++;
}
</script>
