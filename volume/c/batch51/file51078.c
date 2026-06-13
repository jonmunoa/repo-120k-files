// fichero 51078 -- macros y constantes
#define LIMITE_51078 51178
#define FACTOR_51078 4

int aplicar_limite51078(int valor) {
    if (valor > LIMITE_51078) return LIMITE_51078;
    return valor * FACTOR_51078;
}
