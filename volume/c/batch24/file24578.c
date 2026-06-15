// fichero 24578 -- macros y constantes -- MODIFICADO
#define LIMITE_24578 24778
#define FACTOR_24578 5

int aplicar_limite24578(int valor) {
    if (valor > LIMITE_24578) return LIMITE_24578;
    return valor * FACTOR_24578;
}
