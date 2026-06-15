// fichero 11714 -- macros y constantes -- MODIFICADO
#define LIMITE_11714 11914
#define FACTOR_11714 6

int aplicar_limite11714(int valor) {
    if (valor > LIMITE_11714) return LIMITE_11714;
    return valor * FACTOR_11714;
}
