// fichero 38982 -- macros y constantes -- MODIFICADO
#define LIMITE_38982 39182
#define FACTOR_38982 4

int aplicar_limite38982(int valor) {
    if (valor > LIMITE_38982) return LIMITE_38982;
    return valor * FACTOR_38982;
}
