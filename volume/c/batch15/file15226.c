// fichero 15226 -- macros y constantes
#define LIMITE_15226 15326
#define FACTOR_15226 2

int aplicar_limite15226(int valor) {
    if (valor > LIMITE_15226) return LIMITE_15226;
    return valor * FACTOR_15226;
}
