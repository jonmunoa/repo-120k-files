// fichero 52798 -- macros y constantes
#define LIMITE_52798 52898
#define FACTOR_52798 4

int aplicar_limite52798(int valor) {
    if (valor > LIMITE_52798) return LIMITE_52798;
    return valor * FACTOR_52798;
}
