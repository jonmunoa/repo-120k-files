<template>
  <section class="panel-37325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37325");
const base = ref(37325);
const total = computed(() => base.value * 2);

function incrementar37325() {
  base.value++;
}
</script>
