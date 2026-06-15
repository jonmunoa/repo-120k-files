// fichero 20018 -- macros y constantes -- MODIFICADO
#define LIMITE_20018 20218
#define FACTOR_20018 5

int aplicar_limite20018(int valor) {
    if (valor > LIMITE_20018) return LIMITE_20018;
    return valor * FACTOR_20018;
}
