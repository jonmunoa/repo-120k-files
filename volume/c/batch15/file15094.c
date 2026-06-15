// fichero 15094 -- macros y constantes -- MODIFICADO
#define LIMITE_15094 15294
#define FACTOR_15094 6

int aplicar_limite15094(int valor) {
    if (valor > LIMITE_15094) return LIMITE_15094;
    return valor * FACTOR_15094;
}
