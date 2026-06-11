<template>
  <section class="panel-2013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2013");
const base = ref(2013);
const total = computed(() => base.value * 2);

function incrementar2013() {
  base.value++;
}
</script>
