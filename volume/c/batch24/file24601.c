// fichero 24601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24601;

Registro24601 crear_registro24601(int id) {
    Registro24601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
