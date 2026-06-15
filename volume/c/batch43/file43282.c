// fichero 43282 -- macros y constantes -- MODIFICADO
#define LIMITE_43282 43482
#define FACTOR_43282 4

int aplicar_limite43282(int valor) {
    if (valor > LIMITE_43282) return LIMITE_43282;
    return valor * FACTOR_43282;
}
