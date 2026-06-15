// fichero 34578 -- macros y constantes -- MODIFICADO
#define LIMITE_34578 34778
#define FACTOR_34578 5

int aplicar_limite34578(int valor) {
    if (valor > LIMITE_34578) return LIMITE_34578;
    return valor * FACTOR_34578;
}
