// fichero 52410 -- macros y constantes
#define LIMITE_52410 52510
#define FACTOR_52410 1

int aplicar_limite52410(int valor) {
    if (valor > LIMITE_52410) return LIMITE_52410;
    return valor * FACTOR_52410;
}
