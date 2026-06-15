// fichero 35714 -- macros y constantes -- MODIFICADO
#define LIMITE_35714 35914
#define FACTOR_35714 6

int aplicar_limite35714(int valor) {
    if (valor > LIMITE_35714) return LIMITE_35714;
    return valor * FACTOR_35714;
}
