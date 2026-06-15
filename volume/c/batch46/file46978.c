// fichero 46978 -- macros y constantes -- MODIFICADO
#define LIMITE_46978 47178
#define FACTOR_46978 5

int aplicar_limite46978(int valor) {
    if (valor > LIMITE_46978) return LIMITE_46978;
    return valor * FACTOR_46978;
}
