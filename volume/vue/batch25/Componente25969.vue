<template>
  <section class="panel-25969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25969");
const base = ref(25969);
const total = computed(() => base.value * 2);

function incrementar25969() {
  base.value++;
}
</script>
