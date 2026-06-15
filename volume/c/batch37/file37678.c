// fichero 37678 -- macros y constantes -- MODIFICADO
#define LIMITE_37678 37878
#define FACTOR_37678 5

int aplicar_limite37678(int valor) {
    if (valor > LIMITE_37678) return LIMITE_37678;
    return valor * FACTOR_37678;
}
