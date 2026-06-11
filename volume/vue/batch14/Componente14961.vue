<template>
  <section class="panel-14961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14961");
const base = ref(14961);
const total = computed(() => base.value * 2);

function incrementar14961() {
  base.value++;
}
</script>
