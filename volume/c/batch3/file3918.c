// fichero 3918 -- macros y constantes -- MODIFICADO
#define LIMITE_3918 4118
#define FACTOR_3918 5

int aplicar_limite3918(int valor) {
    if (valor > LIMITE_3918) return LIMITE_3918;
    return valor * FACTOR_3918;
}
