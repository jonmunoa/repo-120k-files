<template>
  <section class="panel-35009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35009");
const base = ref(35009);
const total = computed(() => base.value * 2);

function incrementar35009() {
  base.value++;
}
</script>
