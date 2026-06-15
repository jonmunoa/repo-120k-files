// fichero 5018 -- macros y constantes -- MODIFICADO
#define LIMITE_5018 5218
#define FACTOR_5018 5

int aplicar_limite5018(int valor) {
    if (valor > LIMITE_5018) return LIMITE_5018;
    return valor * FACTOR_5018;
}
