<template>
  <section class="panel-25101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25101");
const base = ref(25101);
const total = computed(() => base.value * 2);

function incrementar25101() {
  base.value++;
}
</script>
