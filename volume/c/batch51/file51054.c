// fichero 51054 -- macros y constantes
#define LIMITE_51054 51154
#define FACTOR_51054 5

int aplicar_limite51054(int valor) {
    if (valor > LIMITE_51054) return LIMITE_51054;
    return valor * FACTOR_51054;
}
