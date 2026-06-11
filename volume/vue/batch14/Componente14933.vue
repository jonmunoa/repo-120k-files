<template>
  <section class="panel-14933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14933");
const base = ref(14933);
const total = computed(() => base.value * 2);

function incrementar14933() {
  base.value++;
}
</script>
