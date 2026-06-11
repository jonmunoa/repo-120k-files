<template>
  <section class="panel-14745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14745");
const base = ref(14745);
const total = computed(() => base.value * 2);

function incrementar14745() {
  base.value++;
}
</script>
