// fichero 378 -- macros y constantes -- MODIFICADO
#define LIMITE_378 578
#define FACTOR_378 5

int aplicar_limite378(int valor) {
    if (valor > LIMITE_378) return LIMITE_378;
    return valor * FACTOR_378;
}
