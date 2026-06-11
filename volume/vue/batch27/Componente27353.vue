<template>
  <section class="panel-27353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27353");
const base = ref(27353);
const total = computed(() => base.value * 2);

function incrementar27353() {
  base.value++;
}
</script>
