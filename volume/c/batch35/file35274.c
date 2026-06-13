// fichero 35274 -- macros y constantes
#define LIMITE_35274 35374
#define FACTOR_35274 5

int aplicar_limite35274(int valor) {
    if (valor > LIMITE_35274) return LIMITE_35274;
    return valor * FACTOR_35274;
}
