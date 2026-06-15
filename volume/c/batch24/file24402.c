// fichero 24402 -- macros y constantes -- MODIFICADO
#define LIMITE_24402 24602
#define FACTOR_24402 4

int aplicar_limite24402(int valor) {
    if (valor > LIMITE_24402) return LIMITE_24402;
    return valor * FACTOR_24402;
}
