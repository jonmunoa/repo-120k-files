// fichero 38969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38969;

Registro38969 crear_registro38969(int id) {
    Registro38969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
