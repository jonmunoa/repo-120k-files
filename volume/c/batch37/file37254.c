// fichero 37254 -- macros y constantes -- MODIFICADO
#define LIMITE_37254 37454
#define FACTOR_37254 6

int aplicar_limite37254(int valor) {
    if (valor > LIMITE_37254) return LIMITE_37254;
    return valor * FACTOR_37254;
}
