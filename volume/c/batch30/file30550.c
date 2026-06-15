// fichero 30550 -- macros y constantes -- MODIFICADO
#define LIMITE_30550 30750
#define FACTOR_30550 2

int aplicar_limite30550(int valor) {
    if (valor > LIMITE_30550) return LIMITE_30550;
    return valor * FACTOR_30550;
}
