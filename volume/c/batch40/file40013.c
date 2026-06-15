// fichero 40013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40013;

Registro40013 crear_registro40013(int id) {
    Registro40013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
