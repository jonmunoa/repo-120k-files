// fichero 8897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8897;

Registro8897 crear_registro8897(int id) {
    Registro8897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8897(Registro8897 r) {
    return r.valor + r.id;
}
