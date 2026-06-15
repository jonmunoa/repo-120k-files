// fichero 48678 -- macros y constantes -- MODIFICADO
#define LIMITE_48678 48878
#define FACTOR_48678 5

int aplicar_limite48678(int valor) {
    if (valor > LIMITE_48678) return LIMITE_48678;
    return valor * FACTOR_48678;
}
