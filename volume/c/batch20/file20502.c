// fichero 20502 -- macros y constantes -- MODIFICADO
#define LIMITE_20502 20702
#define FACTOR_20502 4

int aplicar_limite20502(int valor) {
    if (valor > LIMITE_20502) return LIMITE_20502;
    return valor * FACTOR_20502;
}
