<template>
  <section class="panel-18325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18325");
const base = ref(18325);
const total = computed(() => base.value * 2);

function incrementar18325() {
  base.value++;
}
</script>
