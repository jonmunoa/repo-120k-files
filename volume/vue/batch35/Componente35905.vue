<template>
  <section class="panel-35905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35905");
const base = ref(35905);
const total = computed(() => base.value * 2);

function incrementar35905() {
  base.value++;
}
</script>
