// fichero 28422 -- macros y constantes -- MODIFICADO
#define LIMITE_28422 28622
#define FACTOR_28422 4

int aplicar_limite28422(int valor) {
    if (valor > LIMITE_28422) return LIMITE_28422;
    return valor * FACTOR_28422;
}
