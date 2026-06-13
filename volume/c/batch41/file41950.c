// fichero 41950 -- macros y constantes
#define LIMITE_41950 42050
#define FACTOR_41950 1

int aplicar_limite41950(int valor) {
    if (valor > LIMITE_41950) return LIMITE_41950;
    return valor * FACTOR_41950;
}
