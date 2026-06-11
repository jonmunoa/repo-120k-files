<template>
  <section class="panel-46589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46589");
const base = ref(46589);
const total = computed(() => base.value * 2);

function incrementar46589() {
  base.value++;
}
</script>
