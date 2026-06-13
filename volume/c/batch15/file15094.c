// fichero 15094 -- macros y constantes
#define LIMITE_15094 15194
#define FACTOR_15094 5

int aplicar_limite15094(int valor) {
    if (valor > LIMITE_15094) return LIMITE_15094;
    return valor * FACTOR_15094;
}
