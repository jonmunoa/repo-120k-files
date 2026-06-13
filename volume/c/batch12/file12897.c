// fichero 12897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12897;

Registro12897 crear_registro12897(int id) {
    Registro12897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12897(Registro12897 r) {
    return r.valor + r.id;
}
