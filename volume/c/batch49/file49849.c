// fichero 49849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49849;

Registro49849 crear_registro49849(int id) {
    Registro49849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49849(Registro49849 r) {
    return r.valor + r.id;
}
