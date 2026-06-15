// fichero 47338 -- macros y constantes -- MODIFICADO
#define LIMITE_47338 47538
#define FACTOR_47338 5

int aplicar_limite47338(int valor) {
    if (valor > LIMITE_47338) return LIMITE_47338;
    return valor * FACTOR_47338;
}
