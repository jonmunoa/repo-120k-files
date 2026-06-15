// fichero 46338 -- macros y constantes -- MODIFICADO
#define LIMITE_46338 46538
#define FACTOR_46338 5

int aplicar_limite46338(int valor) {
    if (valor > LIMITE_46338) return LIMITE_46338;
    return valor * FACTOR_46338;
}
