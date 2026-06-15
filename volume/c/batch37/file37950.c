// fichero 37950 -- macros y constantes -- MODIFICADO
#define LIMITE_37950 38150
#define FACTOR_37950 2

int aplicar_limite37950(int valor) {
    if (valor > LIMITE_37950) return LIMITE_37950;
    return valor * FACTOR_37950;
}
