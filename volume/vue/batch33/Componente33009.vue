<template>
  <section class="panel-33009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33009");
const base = ref(33009);
const total = computed(() => base.value * 2);

function incrementar33009() {
  base.value++;
}
</script>
