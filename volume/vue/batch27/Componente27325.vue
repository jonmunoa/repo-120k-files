<template>
  <section class="panel-27325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27325");
const base = ref(27325);
const total = computed(() => base.value * 2);

function incrementar27325() {
  base.value++;
}
</script>
