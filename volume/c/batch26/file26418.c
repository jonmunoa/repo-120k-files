// fichero 26418 -- macros y constantes
#define LIMITE_26418 26518
#define FACTOR_26418 4

int aplicar_limite26418(int valor) {
    if (valor > LIMITE_26418) return LIMITE_26418;
    return valor * FACTOR_26418;
}
