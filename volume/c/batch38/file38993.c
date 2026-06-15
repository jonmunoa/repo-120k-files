// fichero 38993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38993;

Registro38993 crear_registro38993(int id) {
    Registro38993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
