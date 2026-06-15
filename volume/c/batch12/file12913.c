// fichero 12913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12913;

Registro12913 crear_registro12913(int id) {
    Registro12913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
