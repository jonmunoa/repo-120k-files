// fichero 21506 -- macros y constantes -- MODIFICADO
#define LIMITE_21506 21706
#define FACTOR_21506 3

int aplicar_limite21506(int valor) {
    if (valor > LIMITE_21506) return LIMITE_21506;
    return valor * FACTOR_21506;
}
