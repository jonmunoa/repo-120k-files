<template>
  <section class="panel-14969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14969");
const base = ref(14969);
const total = computed(() => base.value * 2);

function incrementar14969() {
  base.value++;
}
</script>
