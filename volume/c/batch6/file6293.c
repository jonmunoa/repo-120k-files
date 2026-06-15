// fichero 6293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6293;

Registro6293 crear_registro6293(int id) {
    Registro6293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
