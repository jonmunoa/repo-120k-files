// fichero 40673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40673;

Registro40673 crear_registro40673(int id) {
    Registro40673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
