<template>
  <section class="panel-2941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2941");
const base = ref(2941);
const total = computed(() => base.value * 2);

function incrementar2941() {
  base.value++;
}
</script>
