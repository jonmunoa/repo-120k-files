// fichero 48830 -- macros y constantes -- MODIFICADO
#define LIMITE_48830 49030
#define FACTOR_48830 2

int aplicar_limite48830(int valor) {
    if (valor > LIMITE_48830) return LIMITE_48830;
    return valor * FACTOR_48830;
}
