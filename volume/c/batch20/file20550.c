// fichero 20550 -- macros y constantes -- MODIFICADO
#define LIMITE_20550 20750
#define FACTOR_20550 2

int aplicar_limite20550(int valor) {
    if (valor > LIMITE_20550) return LIMITE_20550;
    return valor * FACTOR_20550;
}
