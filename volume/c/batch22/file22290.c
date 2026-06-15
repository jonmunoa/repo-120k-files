// fichero 22290 -- macros y constantes -- MODIFICADO
#define LIMITE_22290 22490
#define FACTOR_22290 2

int aplicar_limite22290(int valor) {
    if (valor > LIMITE_22290) return LIMITE_22290;
    return valor * FACTOR_22290;
}
