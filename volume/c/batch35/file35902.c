// fichero 35902 -- macros y constantes -- MODIFICADO
#define LIMITE_35902 36102
#define FACTOR_35902 4

int aplicar_limite35902(int valor) {
    if (valor > LIMITE_35902) return LIMITE_35902;
    return valor * FACTOR_35902;
}
