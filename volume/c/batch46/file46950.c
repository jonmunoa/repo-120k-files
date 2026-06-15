// fichero 46950 -- macros y constantes -- MODIFICADO
#define LIMITE_46950 47150
#define FACTOR_46950 2

int aplicar_limite46950(int valor) {
    if (valor > LIMITE_46950) return LIMITE_46950;
    return valor * FACTOR_46950;
}
