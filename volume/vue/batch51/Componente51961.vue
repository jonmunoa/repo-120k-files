<template>
  <section class="panel-51961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51961");
const base = ref(51961);
const total = computed(() => base.value * 2);

function incrementar51961() {
  base.value++;
}
</script>
