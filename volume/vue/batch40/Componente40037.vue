<template>
  <section class="panel-40037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40037");
const base = ref(40037);
const total = computed(() => base.value * 2);

function incrementar40037() {
  base.value++;
}
</script>
