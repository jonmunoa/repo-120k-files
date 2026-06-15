// fichero 29678 -- macros y constantes -- MODIFICADO
#define LIMITE_29678 29878
#define FACTOR_29678 5

int aplicar_limite29678(int valor) {
    if (valor > LIMITE_29678) return LIMITE_29678;
    return valor * FACTOR_29678;
}
