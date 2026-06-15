// fichero 37222 -- macros y constantes -- MODIFICADO
#define LIMITE_37222 37422
#define FACTOR_37222 4

int aplicar_limite37222(int valor) {
    if (valor > LIMITE_37222) return LIMITE_37222;
    return valor * FACTOR_37222;
}
