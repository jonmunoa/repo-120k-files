// fichero 39122 -- macros y constantes -- MODIFICADO
#define LIMITE_39122 39322
#define FACTOR_39122 4

int aplicar_limite39122(int valor) {
    if (valor > LIMITE_39122) return LIMITE_39122;
    return valor * FACTOR_39122;
}
