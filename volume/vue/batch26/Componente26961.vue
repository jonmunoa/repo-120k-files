<template>
  <section class="panel-26961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26961");
const base = ref(26961);
const total = computed(() => base.value * 2);

function incrementar26961() {
  base.value++;
}
</script>
