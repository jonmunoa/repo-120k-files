// fichero 19490 -- macros y constantes -- MODIFICADO
#define LIMITE_19490 19690
#define FACTOR_19490 2

int aplicar_limite19490(int valor) {
    if (valor > LIMITE_19490) return LIMITE_19490;
    return valor * FACTOR_19490;
}
