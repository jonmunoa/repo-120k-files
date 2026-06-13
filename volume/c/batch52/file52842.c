// fichero 52842 -- macros y constantes
#define LIMITE_52842 52942
#define FACTOR_52842 3

int aplicar_limite52842(int valor) {
    if (valor > LIMITE_52842) return LIMITE_52842;
    return valor * FACTOR_52842;
}
