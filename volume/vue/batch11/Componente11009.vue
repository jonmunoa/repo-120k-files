<template>
  <section class="panel-11009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11009");
const base = ref(11009);
const total = computed(() => base.value * 2);

function incrementar11009() {
  base.value++;
}
</script>
