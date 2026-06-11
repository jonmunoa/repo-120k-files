<template>
  <section class="panel-9877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9877");
const base = ref(9877);
const total = computed(() => base.value * 2);

function incrementar9877() {
  base.value++;
}
</script>
