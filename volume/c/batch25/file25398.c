// fichero 25398 -- macros y constantes -- MODIFICADO
#define LIMITE_25398 25598
#define FACTOR_25398 5

int aplicar_limite25398(int valor) {
    if (valor > LIMITE_25398) return LIMITE_25398;
    return valor * FACTOR_25398;
}
