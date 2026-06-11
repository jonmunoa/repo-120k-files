<template>
  <section class="panel-27961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27961");
const base = ref(27961);
const total = computed(() => base.value * 2);

function incrementar27961() {
  base.value++;
}
</script>
