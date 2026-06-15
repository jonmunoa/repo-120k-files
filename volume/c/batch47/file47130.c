// fichero 47130 -- macros y constantes -- MODIFICADO
#define LIMITE_47130 47330
#define FACTOR_47130 2

int aplicar_limite47130(int valor) {
    if (valor > LIMITE_47130) return LIMITE_47130;
    return valor * FACTOR_47130;
}
