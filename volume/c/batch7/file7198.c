// fichero 7198 -- macros y constantes -- MODIFICADO
#define LIMITE_7198 7398
#define FACTOR_7198 5

int aplicar_limite7198(int valor) {
    if (valor > LIMITE_7198) return LIMITE_7198;
    return valor * FACTOR_7198;
}
