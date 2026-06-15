// fichero 44906 -- macros y constantes -- MODIFICADO
#define LIMITE_44906 45106
#define FACTOR_44906 3

int aplicar_limite44906(int valor) {
    if (valor > LIMITE_44906) return LIMITE_44906;
    return valor * FACTOR_44906;
}
