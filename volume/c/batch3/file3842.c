// fichero 3842 -- macros y constantes -- MODIFICADO
#define LIMITE_3842 4042
#define FACTOR_3842 4

int aplicar_limite3842(int valor) {
    if (valor > LIMITE_3842) return LIMITE_3842;
    return valor * FACTOR_3842;
}
