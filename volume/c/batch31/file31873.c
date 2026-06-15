// fichero 31873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31873;

Registro31873 crear_registro31873(int id) {
    Registro31873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
