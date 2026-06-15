// fichero 14730 -- macros y constantes -- MODIFICADO
#define LIMITE_14730 14930
#define FACTOR_14730 2

int aplicar_limite14730(int valor) {
    if (valor > LIMITE_14730) return LIMITE_14730;
    return valor * FACTOR_14730;
}
