// fichero 20378 -- macros y constantes -- MODIFICADO
#define LIMITE_20378 20578
#define FACTOR_20378 5

int aplicar_limite20378(int valor) {
    if (valor > LIMITE_20378) return LIMITE_20378;
    return valor * FACTOR_20378;
}
