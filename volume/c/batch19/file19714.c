// fichero 19714 -- macros y constantes -- MODIFICADO
#define LIMITE_19714 19914
#define FACTOR_19714 6

int aplicar_limite19714(int valor) {
    if (valor > LIMITE_19714) return LIMITE_19714;
    return valor * FACTOR_19714;
}
