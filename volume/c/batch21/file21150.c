// fichero 21150 -- macros y constantes -- MODIFICADO
#define LIMITE_21150 21350
#define FACTOR_21150 2

int aplicar_limite21150(int valor) {
    if (valor > LIMITE_21150) return LIMITE_21150;
    return valor * FACTOR_21150;
}
