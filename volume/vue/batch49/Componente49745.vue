<template>
  <section class="panel-49745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49745");
const base = ref(49745);
const total = computed(() => base.value * 2);

function incrementar49745() {
  base.value++;
}
</script>
