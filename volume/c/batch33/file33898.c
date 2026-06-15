// fichero 33898 -- macros y constantes -- MODIFICADO
#define LIMITE_33898 34098
#define FACTOR_33898 5

int aplicar_limite33898(int valor) {
    if (valor > LIMITE_33898) return LIMITE_33898;
    return valor * FACTOR_33898;
}
