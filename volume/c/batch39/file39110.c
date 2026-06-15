// fichero 39110 -- macros y constantes -- MODIFICADO
#define LIMITE_39110 39310
#define FACTOR_39110 2

int aplicar_limite39110(int valor) {
    if (valor > LIMITE_39110) return LIMITE_39110;
    return valor * FACTOR_39110;
}
