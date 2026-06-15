// fichero 19834 -- macros y constantes -- MODIFICADO
#define LIMITE_19834 20034
#define FACTOR_19834 6

int aplicar_limite19834(int valor) {
    if (valor > LIMITE_19834) return LIMITE_19834;
    return valor * FACTOR_19834;
}
