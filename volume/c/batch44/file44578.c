// fichero 44578 -- macros y constantes -- MODIFICADO
#define LIMITE_44578 44778
#define FACTOR_44578 5

int aplicar_limite44578(int valor) {
    if (valor > LIMITE_44578) return LIMITE_44578;
    return valor * FACTOR_44578;
}
