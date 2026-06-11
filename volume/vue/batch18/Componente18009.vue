<template>
  <section class="panel-18009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18009");
const base = ref(18009);
const total = computed(() => base.value * 2);

function incrementar18009() {
  base.value++;
}
</script>
