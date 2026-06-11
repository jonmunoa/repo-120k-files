<template>
  <section class="panel-46717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46717");
const base = ref(46717);
const total = computed(() => base.value * 2);

function incrementar46717() {
  base.value++;
}
</script>
