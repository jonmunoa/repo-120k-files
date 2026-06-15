// fichero 19830 -- macros y constantes -- MODIFICADO
#define LIMITE_19830 20030
#define FACTOR_19830 2

int aplicar_limite19830(int valor) {
    if (valor > LIMITE_19830) return LIMITE_19830;
    return valor * FACTOR_19830;
}
