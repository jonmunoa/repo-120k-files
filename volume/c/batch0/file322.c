// fichero 322 -- macros y constantes -- MODIFICADO
#define LIMITE_322 522
#define FACTOR_322 4

int aplicar_limite322(int valor) {
    if (valor > LIMITE_322) return LIMITE_322;
    return valor * FACTOR_322;
}
