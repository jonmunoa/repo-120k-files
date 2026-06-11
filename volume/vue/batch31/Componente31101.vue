<template>
  <section class="panel-31101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31101");
const base = ref(31101);
const total = computed(() => base.value * 2);

function incrementar31101() {
  base.value++;
}
</script>
