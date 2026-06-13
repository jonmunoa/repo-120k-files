// fichero 12785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12785;

Registro12785 crear_registro12785(int id) {
    Registro12785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12785(Registro12785 r) {
    return r.valor + r.id;
}
