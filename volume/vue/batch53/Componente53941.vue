<template>
  <section class="panel-53941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53941");
const base = ref(53941);
const total = computed(() => base.value * 2);

function incrementar53941() {
  base.value++;
}
</script>
