// fichero 40897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40897;

Registro40897 crear_registro40897(int id) {
    Registro40897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40897(Registro40897 r) {
    return r.valor + r.id;
}
