// fichero 38102 -- macros y constantes -- MODIFICADO
#define LIMITE_38102 38302
#define FACTOR_38102 4

int aplicar_limite38102(int valor) {
    if (valor > LIMITE_38102) return LIMITE_38102;
    return valor * FACTOR_38102;
}
