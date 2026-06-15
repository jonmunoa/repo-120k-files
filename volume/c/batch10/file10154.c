// fichero 10154 -- macros y constantes -- MODIFICADO
#define LIMITE_10154 10354
#define FACTOR_10154 6

int aplicar_limite10154(int valor) {
    if (valor > LIMITE_10154) return LIMITE_10154;
    return valor * FACTOR_10154;
}
