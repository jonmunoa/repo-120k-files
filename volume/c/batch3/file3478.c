// fichero 3478 -- macros y constantes -- MODIFICADO
#define LIMITE_3478 3678
#define FACTOR_3478 5

int aplicar_limite3478(int valor) {
    if (valor > LIMITE_3478) return LIMITE_3478;
    return valor * FACTOR_3478;
}
