// fichero 49941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49941;

Registro49941 crear_registro49941(int id) {
    Registro49941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
