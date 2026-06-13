// fichero 8418 -- macros y constantes
#define LIMITE_8418 8518
#define FACTOR_8418 4

int aplicar_limite8418(int valor) {
    if (valor > LIMITE_8418) return LIMITE_8418;
    return valor * FACTOR_8418;
}
