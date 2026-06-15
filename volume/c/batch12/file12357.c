// fichero 12357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12357;

Registro12357 crear_registro12357(int id) {
    Registro12357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
