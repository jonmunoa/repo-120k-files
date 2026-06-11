<template>
  <section class="panel-11745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11745");
const base = ref(11745);
const total = computed(() => base.value * 2);

function incrementar11745() {
  base.value++;
}
</script>
