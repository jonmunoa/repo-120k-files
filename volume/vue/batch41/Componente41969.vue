<template>
  <section class="panel-41969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41969");
const base = ref(41969);
const total = computed(() => base.value * 2);

function incrementar41969() {
  base.value++;
}
</script>
