// fichero 23005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23005;

Registro23005 crear_registro23005(int id) {
    Registro23005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
