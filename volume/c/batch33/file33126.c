// fichero 33126 -- macros y constantes -- MODIFICADO
#define LIMITE_33126 33326
#define FACTOR_33126 3

int aplicar_limite33126(int valor) {
    if (valor > LIMITE_33126) return LIMITE_33126;
    return valor * FACTOR_33126;
}
