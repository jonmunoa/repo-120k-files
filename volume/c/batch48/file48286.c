// fichero 48286 -- macros y constantes -- MODIFICADO
#define LIMITE_48286 48486
#define FACTOR_48286 3

int aplicar_limite48286(int valor) {
    if (valor > LIMITE_48286) return LIMITE_48286;
    return valor * FACTOR_48286;
}
