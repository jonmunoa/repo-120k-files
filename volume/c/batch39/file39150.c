// fichero 39150 -- macros y constantes -- MODIFICADO
#define LIMITE_39150 39350
#define FACTOR_39150 2

int aplicar_limite39150(int valor) {
    if (valor > LIMITE_39150) return LIMITE_39150;
    return valor * FACTOR_39150;
}
