<template>
  <section class="panel-46373">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46373");
const base = ref(46373);
const total = computed(() => base.value * 2);

function incrementar46373() {
  base.value++;
}
</script>
