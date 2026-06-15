// fichero 20146 -- macros y constantes -- MODIFICADO
#define LIMITE_20146 20346
#define FACTOR_20146 3

int aplicar_limite20146(int valor) {
    if (valor > LIMITE_20146) return LIMITE_20146;
    return valor * FACTOR_20146;
}
