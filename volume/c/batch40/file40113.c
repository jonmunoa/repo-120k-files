// fichero 40113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40113;

Registro40113 crear_registro40113(int id) {
    Registro40113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
