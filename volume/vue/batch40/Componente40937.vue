<template>
  <section class="panel-40937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40937");
const base = ref(40937);
const total = computed(() => base.value * 2);

function incrementar40937() {
  base.value++;
}
</script>
