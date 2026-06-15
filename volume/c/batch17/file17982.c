// fichero 17982 -- macros y constantes -- MODIFICADO
#define LIMITE_17982 18182
#define FACTOR_17982 4

int aplicar_limite17982(int valor) {
    if (valor > LIMITE_17982) return LIMITE_17982;
    return valor * FACTOR_17982;
}
