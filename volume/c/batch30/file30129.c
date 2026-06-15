// fichero 30129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30129;

Registro30129 crear_registro30129(int id) {
    Registro30129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
