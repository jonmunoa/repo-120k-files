// fichero 41182 -- macros y constantes
#define LIMITE_41182 41282
#define FACTOR_41182 3

int aplicar_limite41182(int valor) {
    if (valor > LIMITE_41182) return LIMITE_41182;
    return valor * FACTOR_41182;
}
