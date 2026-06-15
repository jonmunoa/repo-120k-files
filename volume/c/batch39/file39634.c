// fichero 39634 -- macros y constantes -- MODIFICADO
#define LIMITE_39634 39834
#define FACTOR_39634 6

int aplicar_limite39634(int valor) {
    if (valor > LIMITE_39634) return LIMITE_39634;
    return valor * FACTOR_39634;
}
