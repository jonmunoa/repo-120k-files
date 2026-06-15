// fichero 28526 -- macros y constantes -- MODIFICADO
#define LIMITE_28526 28726
#define FACTOR_28526 3

int aplicar_limite28526(int valor) {
    if (valor > LIMITE_28526) return LIMITE_28526;
    return valor * FACTOR_28526;
}
