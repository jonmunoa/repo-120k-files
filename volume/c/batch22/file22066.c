// fichero 22066 -- macros y constantes -- MODIFICADO
#define LIMITE_22066 22266
#define FACTOR_22066 3

int aplicar_limite22066(int valor) {
    if (valor > LIMITE_22066) return LIMITE_22066;
    return valor * FACTOR_22066;
}
