// fichero 6209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6209;

Registro6209 crear_registro6209(int id) {
    Registro6209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
