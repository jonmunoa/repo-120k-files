// fichero 40001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40001;

Registro40001 crear_registro40001(int id) {
    Registro40001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
