// fichero 11429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11429;

Registro11429 crear_registro11429(int id) {
    Registro11429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11429(Registro11429 r) {
    return r.valor + r.id;
}
