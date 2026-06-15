// fichero 25122 -- macros y constantes -- MODIFICADO
#define LIMITE_25122 25322
#define FACTOR_25122 4

int aplicar_limite25122(int valor) {
    if (valor > LIMITE_25122) return LIMITE_25122;
    return valor * FACTOR_25122;
}
