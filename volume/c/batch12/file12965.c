// fichero 12965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12965;

Registro12965 crear_registro12965(int id) {
    Registro12965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
