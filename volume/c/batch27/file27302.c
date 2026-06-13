// fichero 27302 -- macros y constantes
#define LIMITE_27302 27402
#define FACTOR_27302 3

int aplicar_limite27302(int valor) {
    if (valor > LIMITE_27302) return LIMITE_27302;
    return valor * FACTOR_27302;
}
