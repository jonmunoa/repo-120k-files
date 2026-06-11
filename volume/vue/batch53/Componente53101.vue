<template>
  <section class="panel-53101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53101");
const base = ref(53101);
const total = computed(() => base.value * 2);

function incrementar53101() {
  base.value++;
}
</script>
