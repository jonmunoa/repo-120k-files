<template>
  <section class="panel-27601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27601");
const base = ref(27601);
const total = computed(() => base.value * 2);

function incrementar27601() {
  base.value++;
}
</script>
