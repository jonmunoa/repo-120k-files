// fichero 30490 -- macros y constantes -- MODIFICADO
#define LIMITE_30490 30690
#define FACTOR_30490 2

int aplicar_limite30490(int valor) {
    if (valor > LIMITE_30490) return LIMITE_30490;
    return valor * FACTOR_30490;
}
