<template>
  <section class="panel-37829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37829");
const base = ref(37829);
const total = computed(() => base.value * 2);

function incrementar37829() {
  base.value++;
}
</script>
