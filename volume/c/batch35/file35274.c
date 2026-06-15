// fichero 35274 -- macros y constantes -- MODIFICADO
#define LIMITE_35274 35474
#define FACTOR_35274 6

int aplicar_limite35274(int valor) {
    if (valor > LIMITE_35274) return LIMITE_35274;
    return valor * FACTOR_35274;
}
