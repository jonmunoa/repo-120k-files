// fichero 10502 -- macros y constantes
#define LIMITE_10502 10602
#define FACTOR_10502 3

int aplicar_limite10502(int valor) {
    if (valor > LIMITE_10502) return LIMITE_10502;
    return valor * FACTOR_10502;
}
