// fichero 29994 -- macros y constantes -- MODIFICADO
#define LIMITE_29994 30194
#define FACTOR_29994 6

int aplicar_limite29994(int valor) {
    if (valor > LIMITE_29994) return LIMITE_29994;
    return valor * FACTOR_29994;
}
