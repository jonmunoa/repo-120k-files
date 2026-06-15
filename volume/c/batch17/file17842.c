// fichero 17842 -- macros y constantes -- MODIFICADO
#define LIMITE_17842 18042
#define FACTOR_17842 4

int aplicar_limite17842(int valor) {
    if (valor > LIMITE_17842) return LIMITE_17842;
    return valor * FACTOR_17842;
}
