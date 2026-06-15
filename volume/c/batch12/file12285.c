// fichero 12285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12285;

Registro12285 crear_registro12285(int id) {
    Registro12285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
