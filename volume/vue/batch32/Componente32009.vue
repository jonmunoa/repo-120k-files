<template>
  <section class="panel-32009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32009");
const base = ref(32009);
const total = computed(() => base.value * 2);

function incrementar32009() {
  base.value++;
}
</script>
