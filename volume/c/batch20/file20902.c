// fichero 20902 -- macros y constantes -- MODIFICADO
#define LIMITE_20902 21102
#define FACTOR_20902 4

int aplicar_limite20902(int valor) {
    if (valor > LIMITE_20902) return LIMITE_20902;
    return valor * FACTOR_20902;
}
