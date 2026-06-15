// fichero 21202 -- macros y constantes -- MODIFICADO
#define LIMITE_21202 21402
#define FACTOR_21202 4

int aplicar_limite21202(int valor) {
    if (valor > LIMITE_21202) return LIMITE_21202;
    return valor * FACTOR_21202;
}
