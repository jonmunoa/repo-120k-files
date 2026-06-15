// fichero 12161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12161;

Registro12161 crear_registro12161(int id) {
    Registro12161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
