// fichero 40294 -- macros y constantes -- MODIFICADO
#define LIMITE_40294 40494
#define FACTOR_40294 6

int aplicar_limite40294(int valor) {
    if (valor > LIMITE_40294) return LIMITE_40294;
    return valor * FACTOR_40294;
}
