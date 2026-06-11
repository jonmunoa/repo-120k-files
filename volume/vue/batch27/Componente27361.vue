<template>
  <section class="panel-27361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27361");
const base = ref(27361);
const total = computed(() => base.value * 2);

function incrementar27361() {
  base.value++;
}
</script>
