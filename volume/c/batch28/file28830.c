// fichero 28830 -- macros y constantes -- MODIFICADO
#define LIMITE_28830 29030
#define FACTOR_28830 2

int aplicar_limite28830(int valor) {
    if (valor > LIMITE_28830) return LIMITE_28830;
    return valor * FACTOR_28830;
}
