// fichero 378 -- macros y constantes
#define LIMITE_378 478
#define FACTOR_378 4

int aplicar_limite378(int valor) {
    if (valor > LIMITE_378) return LIMITE_378;
    return valor * FACTOR_378;
}
