// fichero 51322 -- macros y constantes
#define LIMITE_51322 51422
#define FACTOR_51322 3

int aplicar_limite51322(int valor) {
    if (valor > LIMITE_51322) return LIMITE_51322;
    return valor * FACTOR_51322;
}
