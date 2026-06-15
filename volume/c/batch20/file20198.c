// fichero 20198 -- macros y constantes -- MODIFICADO
#define LIMITE_20198 20398
#define FACTOR_20198 5

int aplicar_limite20198(int valor) {
    if (valor > LIMITE_20198) return LIMITE_20198;
    return valor * FACTOR_20198;
}
