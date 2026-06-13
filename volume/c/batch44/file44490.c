// fichero 44490 -- macros y constantes
#define LIMITE_44490 44590
#define FACTOR_44490 1

int aplicar_limite44490(int valor) {
    if (valor > LIMITE_44490) return LIMITE_44490;
    return valor * FACTOR_44490;
}
