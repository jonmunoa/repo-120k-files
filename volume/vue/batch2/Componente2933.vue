<template>
  <section class="panel-2933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2933");
const base = ref(2933);
const total = computed(() => base.value * 2);

function incrementar2933() {
  base.value++;
}
</script>
