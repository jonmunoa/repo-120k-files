// fichero 18918 -- macros y constantes -- MODIFICADO
#define LIMITE_18918 19118
#define FACTOR_18918 5

int aplicar_limite18918(int valor) {
    if (valor > LIMITE_18918) return LIMITE_18918;
    return valor * FACTOR_18918;
}
