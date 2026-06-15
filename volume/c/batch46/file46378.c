// fichero 46378 -- macros y constantes -- MODIFICADO
#define LIMITE_46378 46578
#define FACTOR_46378 5

int aplicar_limite46378(int valor) {
    if (valor > LIMITE_46378) return LIMITE_46378;
    return valor * FACTOR_46378;
}
