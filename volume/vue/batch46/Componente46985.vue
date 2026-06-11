<template>
  <section class="panel-46985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46985");
const base = ref(46985);
const total = computed(() => base.value * 2);

function incrementar46985() {
  base.value++;
}
</script>
