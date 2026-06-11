<template>
  <section class="panel-46869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46869");
const base = ref(46869);
const total = computed(() => base.value * 2);

function incrementar46869() {
  base.value++;
}
</script>
