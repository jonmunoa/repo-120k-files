// fichero 40833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40833;

Registro40833 crear_registro40833(int id) {
    Registro40833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
