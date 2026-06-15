// fichero 49993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49993;

Registro49993 crear_registro49993(int id) {
    Registro49993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
