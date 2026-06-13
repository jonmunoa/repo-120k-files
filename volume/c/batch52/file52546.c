// fichero 52546 -- macros y constantes
#define LIMITE_52546 52646
#define FACTOR_52546 2

int aplicar_limite52546(int valor) {
    if (valor > LIMITE_52546) return LIMITE_52546;
    return valor * FACTOR_52546;
}
