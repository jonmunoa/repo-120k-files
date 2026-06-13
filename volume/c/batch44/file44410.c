// fichero 44410 -- macros y constantes
#define LIMITE_44410 44510
#define FACTOR_44410 1

int aplicar_limite44410(int valor) {
    if (valor > LIMITE_44410) return LIMITE_44410;
    return valor * FACTOR_44410;
}
