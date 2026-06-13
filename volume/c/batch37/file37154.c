// fichero 37154 -- macros y constantes
#define LIMITE_37154 37254
#define FACTOR_37154 5

int aplicar_limite37154(int valor) {
    if (valor > LIMITE_37154) return LIMITE_37154;
    return valor * FACTOR_37154;
}
