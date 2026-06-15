// fichero 25758 -- macros y constantes -- MODIFICADO
#define LIMITE_25758 25958
#define FACTOR_25758 5

int aplicar_limite25758(int valor) {
    if (valor > LIMITE_25758) return LIMITE_25758;
    return valor * FACTOR_25758;
}
