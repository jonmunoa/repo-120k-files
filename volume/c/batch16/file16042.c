// fichero 16042 -- macros y constantes -- MODIFICADO
#define LIMITE_16042 16242
#define FACTOR_16042 4

int aplicar_limite16042(int valor) {
    if (valor > LIMITE_16042) return LIMITE_16042;
    return valor * FACTOR_16042;
}
