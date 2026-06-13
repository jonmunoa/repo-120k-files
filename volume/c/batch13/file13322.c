// fichero 13322 -- macros y constantes
#define LIMITE_13322 13422
#define FACTOR_13322 3

int aplicar_limite13322(int valor) {
    if (valor > LIMITE_13322) return LIMITE_13322;
    return valor * FACTOR_13322;
}
