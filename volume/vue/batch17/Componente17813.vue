<template>
  <section class="panel-17813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17813");
const base = ref(17813);
const total = computed(() => base.value * 2);

function incrementar17813() {
  base.value++;
}
</script>
