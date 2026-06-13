// fichero 35845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35845;

Registro35845 crear_registro35845(int id) {
    Registro35845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35845(Registro35845 r) {
    return r.valor + r.id;
}
