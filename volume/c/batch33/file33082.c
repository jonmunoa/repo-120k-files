// fichero 33082 -- macros y constantes -- MODIFICADO
#define LIMITE_33082 33282
#define FACTOR_33082 4

int aplicar_limite33082(int valor) {
    if (valor > LIMITE_33082) return LIMITE_33082;
    return valor * FACTOR_33082;
}
