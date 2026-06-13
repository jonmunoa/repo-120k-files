// fichero 15506 -- macros y constantes
#define LIMITE_15506 15606
#define FACTOR_15506 2

int aplicar_limite15506(int valor) {
    if (valor > LIMITE_15506) return LIMITE_15506;
    return valor * FACTOR_15506;
}
