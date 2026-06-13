// fichero 29994 -- macros y constantes
#define LIMITE_29994 30094
#define FACTOR_29994 5

int aplicar_limite29994(int valor) {
    if (valor > LIMITE_29994) return LIMITE_29994;
    return valor * FACTOR_29994;
}
