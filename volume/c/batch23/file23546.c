// fichero 23546 -- macros y constantes -- MODIFICADO
#define LIMITE_23546 23746
#define FACTOR_23546 3

int aplicar_limite23546(int valor) {
    if (valor > LIMITE_23546) return LIMITE_23546;
    return valor * FACTOR_23546;
}
