<template>
  <section class="panel-46009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46009");
const base = ref(46009);
const total = computed(() => base.value * 2);

function incrementar46009() {
  base.value++;
}
</script>
