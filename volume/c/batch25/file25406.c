// fichero 25406 -- macros y constantes -- MODIFICADO
#define LIMITE_25406 25606
#define FACTOR_25406 3

int aplicar_limite25406(int valor) {
    if (valor > LIMITE_25406) return LIMITE_25406;
    return valor * FACTOR_25406;
}
