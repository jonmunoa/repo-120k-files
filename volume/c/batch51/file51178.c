// fichero 51178 -- macros y constantes
#define LIMITE_51178 51278
#define FACTOR_51178 4

int aplicar_limite51178(int valor) {
    if (valor > LIMITE_51178) return LIMITE_51178;
    return valor * FACTOR_51178;
}
