// fichero 25102 -- macros y constantes -- MODIFICADO
#define LIMITE_25102 25302
#define FACTOR_25102 4

int aplicar_limite25102(int valor) {
    if (valor > LIMITE_25102) return LIMITE_25102;
    return valor * FACTOR_25102;
}
