<template>
  <section class="panel-40017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40017");
const base = ref(40017);
const total = computed(() => base.value * 2);

function incrementar40017() {
  base.value++;
}
</script>
