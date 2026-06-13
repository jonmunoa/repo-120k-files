// fichero 37038 -- macros y constantes
#define LIMITE_37038 37138
#define FACTOR_37038 4

int aplicar_limite37038(int valor) {
    if (valor > LIMITE_37038) return LIMITE_37038;
    return valor * FACTOR_37038;
}
