// fichero 47014 -- macros y constantes -- MODIFICADO
#define LIMITE_47014 47214
#define FACTOR_47014 6

int aplicar_limite47014(int valor) {
    if (valor > LIMITE_47014) return LIMITE_47014;
    return valor * FACTOR_47014;
}
