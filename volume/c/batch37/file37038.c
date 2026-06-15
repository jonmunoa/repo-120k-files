// fichero 37038 -- macros y constantes -- MODIFICADO
#define LIMITE_37038 37238
#define FACTOR_37038 5

int aplicar_limite37038(int valor) {
    if (valor > LIMITE_37038) return LIMITE_37038;
    return valor * FACTOR_37038;
}
