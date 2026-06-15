// fichero 20330 -- macros y constantes -- MODIFICADO
#define LIMITE_20330 20530
#define FACTOR_20330 2

int aplicar_limite20330(int valor) {
    if (valor > LIMITE_20330) return LIMITE_20330;
    return valor * FACTOR_20330;
}
