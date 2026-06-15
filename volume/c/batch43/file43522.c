// fichero 43522 -- macros y constantes -- MODIFICADO
#define LIMITE_43522 43722
#define FACTOR_43522 4

int aplicar_limite43522(int valor) {
    if (valor > LIMITE_43522) return LIMITE_43522;
    return valor * FACTOR_43522;
}
