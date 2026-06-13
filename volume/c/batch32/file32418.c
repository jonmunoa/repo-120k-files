// fichero 32418 -- macros y constantes
#define LIMITE_32418 32518
#define FACTOR_32418 4

int aplicar_limite32418(int valor) {
    if (valor > LIMITE_32418) return LIMITE_32418;
    return valor * FACTOR_32418;
}
