// fichero 12089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12089;

Registro12089 crear_registro12089(int id) {
    Registro12089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
