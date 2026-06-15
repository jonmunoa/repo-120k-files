// fichero 5578 -- macros y constantes -- MODIFICADO
#define LIMITE_5578 5778
#define FACTOR_5578 5

int aplicar_limite5578(int valor) {
    if (valor > LIMITE_5578) return LIMITE_5578;
    return valor * FACTOR_5578;
}
