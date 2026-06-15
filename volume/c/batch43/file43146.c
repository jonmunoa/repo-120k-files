// fichero 43146 -- macros y constantes -- MODIFICADO
#define LIMITE_43146 43346
#define FACTOR_43146 3

int aplicar_limite43146(int valor) {
    if (valor > LIMITE_43146) return LIMITE_43146;
    return valor * FACTOR_43146;
}
