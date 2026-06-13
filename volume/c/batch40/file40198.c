// fichero 40198 -- macros y constantes
#define LIMITE_40198 40298
#define FACTOR_40198 4

int aplicar_limite40198(int valor) {
    if (valor > LIMITE_40198) return LIMITE_40198;
    return valor * FACTOR_40198;
}
