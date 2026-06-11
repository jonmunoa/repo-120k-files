<template>
  <section class="panel-55577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55577");
const base = ref(55577);
const total = computed(() => base.value * 2);

function incrementar55577() {
  base.value++;
}
</script>
