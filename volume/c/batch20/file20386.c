// fichero 20386 -- macros y constantes -- MODIFICADO
#define LIMITE_20386 20586
#define FACTOR_20386 3

int aplicar_limite20386(int valor) {
    if (valor > LIMITE_20386) return LIMITE_20386;
    return valor * FACTOR_20386;
}
