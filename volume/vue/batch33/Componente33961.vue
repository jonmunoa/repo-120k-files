<template>
  <section class="panel-33961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33961");
const base = ref(33961);
const total = computed(() => base.value * 2);

function incrementar33961() {
  base.value++;
}
</script>
