<template>
  <section class="panel-33921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33921");
const base = ref(33921);
const total = computed(() => base.value * 2);

function incrementar33921() {
  base.value++;
}
</script>
