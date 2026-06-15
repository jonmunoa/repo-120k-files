// fichero 45338 -- macros y constantes -- MODIFICADO
#define LIMITE_45338 45538
#define FACTOR_45338 5

int aplicar_limite45338(int valor) {
    if (valor > LIMITE_45338) return LIMITE_45338;
    return valor * FACTOR_45338;
}
