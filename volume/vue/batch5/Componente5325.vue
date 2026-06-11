<template>
  <section class="panel-5325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5325");
const base = ref(5325);
const total = computed(() => base.value * 2);

function incrementar5325() {
  base.value++;
}
</script>
