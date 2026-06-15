// fichero 25126 -- macros y constantes -- MODIFICADO
#define LIMITE_25126 25326
#define FACTOR_25126 3

int aplicar_limite25126(int valor) {
    if (valor > LIMITE_25126) return LIMITE_25126;
    return valor * FACTOR_25126;
}
