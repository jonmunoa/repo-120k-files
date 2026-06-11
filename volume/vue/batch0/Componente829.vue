<template>
  <section class="panel-829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 829");
const base = ref(829);
const total = computed(() => base.value * 2);

function incrementar829() {
  base.value++;
}
</script>
