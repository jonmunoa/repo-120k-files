<template>
  <section class="panel-17017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17017");
const base = ref(17017);
const total = computed(() => base.value * 2);

function incrementar17017() {
  base.value++;
}
</script>
