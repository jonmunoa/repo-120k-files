<template>
  <section class="panel-14325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14325");
const base = ref(14325);
const total = computed(() => base.value * 2);

function incrementar14325() {
  base.value++;
}
</script>
