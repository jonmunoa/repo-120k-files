<template>
  <section class="panel-27673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27673");
const base = ref(27673);
const total = computed(() => base.value * 2);

function incrementar27673() {
  base.value++;
}
</script>
