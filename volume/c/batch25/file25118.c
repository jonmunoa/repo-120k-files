// fichero 25118 -- macros y constantes -- MODIFICADO
#define LIMITE_25118 25318
#define FACTOR_25118 5

int aplicar_limite25118(int valor) {
    if (valor > LIMITE_25118) return LIMITE_25118;
    return valor * FACTOR_25118;
}
