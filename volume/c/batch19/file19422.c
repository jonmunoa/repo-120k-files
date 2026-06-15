// fichero 19422 -- macros y constantes -- MODIFICADO
#define LIMITE_19422 19622
#define FACTOR_19422 4

int aplicar_limite19422(int valor) {
    if (valor > LIMITE_19422) return LIMITE_19422;
    return valor * FACTOR_19422;
}
